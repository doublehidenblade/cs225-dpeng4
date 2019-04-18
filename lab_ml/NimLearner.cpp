/**
 * @file NimLearner.cpp
 * CS 225: Data Structures
 */

#include "NimLearner.h"
#include <ctime>
#include <stack>


/**
 * Constructor to create a game of Nim with `startingTokens` starting tokens.
 *
 * This function creates a graph, `g_` representing all of the states of a
 * game of Nim with vertex labels "p#-X", where:
 * - # is the current player's turn; p1 for Player 1, p2 for Player2
 * - X is the tokens remaining at the start of a player's turn
 *
 * For example:
 *   "p1-4" is Player 1's turn with four (4) tokens remaining
 *   "p2-8" is Player 2's turn with eight (8) tokens remaining
 *
 * All legal moves between states are created as edges with initial weights
 * of 0.
 *
 * @param startingTokens The number of starting tokens in the game of Nim.
 */
NimLearner::NimLearner(unsigned startingTokens) : g_(true, true) {
    /* Your code goes here! */
    startingVertex_ = "p1-"+std::to_string(startingTokens);
    std::stack<Vertex> vertexcount;
    std::stack<int> tokencount;
    std::stack<int> playercount;
    Vertex next;
    Vertex cur = "p1-"+std::to_string(startingTokens);;
    int token = startingTokens;
    int player = 1;
    vertexcount.push(cur);
    tokencount.push(startingTokens);
    playercount.push(player);
    while(!vertexcount.empty()){
      cur = vertexcount.top();vertexcount.pop();
      token = tokencount.top();tokencount.pop();
      player = playercount.top();playercount.pop();
      // process cur
      if(!g_.vertexExists(cur)){
        g_.insertVertex(cur);
      }
      // add children 1
      if(token-1>=0){
        next = "p"+std::to_string(player%2+1)+"-"+std::to_string(token-1);

        g_.insertEdge(cur, next);
        g_.setEdgeWeight(cur, next, 0);
        vertexcount.push(next);
        tokencount.push(token-1);
        playercount.push(player%2+1);
      }
      // add children 2
      if(token-2>=0){
        next = "p"+std::to_string(player%2+1)+"-"+std::to_string(token-2);
        g_.insertEdge(cur, next);
        g_.setEdgeWeight(cur, next, 0);
        vertexcount.push(next);
        tokencount.push(token-2);
        playercount.push(player%2+1);
      }
    }
}

/**
 * Plays a random game of Nim, returning the path through the state graph
 * as a vector of `Edge` classes.  The `origin` of the first `Edge` must be
 * the vertex with the label "p1-#", where # is the number of starting
 * tokens.  (For example, in a 10 token game, result[0].origin must be the
 * vertex "p1-10".)
 *
 * @returns A random path through the state space graph.
 */
std::vector<Edge> NimLearner::playRandomGame() const {
  vector<Edge> path;
 /* Your code goes here! */
  vector<Vertex> adj;
  Vertex cur = startingVertex_;
  Vertex next = cur;
  while(true){
    adj = g_.getAdjacent(cur);
    if(adj.size()==0){
      break;
    }
    int choice = rand()%(adj.size());
    next = adj[choice];
    path.push_back(Edge(cur, next));
    cur = next;
  }
  return path;
}

/*
 * Updates the edge weights on the graph based on a path through the state
 * tree.
 *
 * If the `path` has Player 1 winning (eg: the last vertex in the path goes
 * to Player 2 with no tokens remaining, or "p2-0", meaning that Player 1
 * took the last token), then all choices made by Player 1 (edges where
 * Player 1 is the source vertex) are rewarded by increasing the edge weight
 * by 1 and all choices made by Player 2 are punished by changing the edge
 * weight by -1.
 *
 * Likewise, if the `path` has Player 2 winning, Player 2 choices are
 * rewarded and Player 1 choices are punished.
 *
 * @param path A path through the a game of Nim to learn.
 */
void NimLearner::updateEdgeWeights(const std::vector<Edge> & path) {
 /* Your code goes here! */
 char winner;
 Vertex winv = "p1-0";
 if(path[path.size()-1].dest==winv){
   winner = '2';
 }else{winner = '1';}
  for(unsigned i=0;i<path.size();i++){
    Edge cur = path[i];
    if(cur.source[1]==winner){
      g_.setEdgeWeight(cur.source, cur.dest, g_.getEdgeWeight(cur.source, cur.dest)+1);
    }else{
      g_.setEdgeWeight(cur.source, cur.dest, g_.getEdgeWeight(cur.source, cur.dest)-1);
    }
  }
}

/**
 * Label the edges as "WIN" or "LOSE" based on a threshold.
 */
void NimLearner::labelEdgesFromThreshold(int threshold) {
  for (const Vertex & v : g_.getVertices()) {
    for (const Vertex & w : g_.getAdjacent(v)) {
      int weight = g_.getEdgeWeight(v, w);

      // Label all edges with positve weights as "WINPATH"
      if (weight > threshold)           { g_.setEdgeLabel(v, w, "WIN"); }
      else if (weight < -1 * threshold) { g_.setEdgeLabel(v, w, "LOSE"); }
    }
  }
}

/**
 * Returns a constant reference to the state space graph.
 *
 * @returns A constant reference to the state space graph.
 */
const Graph & NimLearner::getGraph() const {
  return g_;
}
