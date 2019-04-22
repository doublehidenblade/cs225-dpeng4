#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>

/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::numVertices() const {//clear
  // TODO: Part 2
  return vertexMap.size();
}


/**
* The degree of the vertex. For directed: Sum of in-degree and out-degree
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {//clear
  // TODO: Part 2
  typename std::unordered_map<std::string, std::list<edgeListIter>>::const_iterator it = adjList.find (v.key());
  return (it->second).size();
}


/**
* Inserts a Vertex into the Graph.
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {//clear
  // TODO: Part 2
  V & v = *(new V(key));
  std::pair<std::string, V_byRef> newv (key,v);
  vertexMap.insert(newv);
  std::list<edgeListIter> list;
  std::pair<std::string, std::list<edgeListIter>> newadj (key,list);
  adjList.insert(newadj);
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  vertexMap.erase(key);
  typename std::unordered_map<std::string, std::list<edgeListIter>>::const_iterator it = adjList.find(key);
  std::list<edgeListIter> elist = it->second;
  for(edgeListIter ite : elist){
    E_byRef temp = *ite;
    E edge = temp;
    V v1 = edge.source();
    V v2 = edge.dest();
    (adjList.find(v1.key())->second).remove(ite);//remove from std::list<edgeListIter>
    (adjList.find(v2.key())->second).remove(ite);
    edgeList.erase(ite);
  }
  adjList.erase(key);
}


/**
* Inserts an Edge into the Graph.
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
  // TODO: Part 2
  E & e = *(new E(v1, v2));
  edgeList.push_front(e);
  edgeListIter ite = edgeList.begin();
  typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator it1 = adjList.find (v1.key());
  (it1->second).push_front(ite);
  typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator it2 = adjList.find (v2.key());
  (it2->second).push_front(ite);
  return e;
}


/**
* Removes an Edge from the Graph. Consider both the undirected and directed cases.
* min(degree(key1), degree(key2))
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {
  // TODO: Part 2
  // remove from edgelist
  for (edgeListIter it = edgeList.begin(); it != edgeList.end(); it++){
    E edge = *it;
    Vertex source = edge.source();
    Vertex dest = edge.dest();
    if((source.key()==key1 && dest.key()==key2)||(source.key()==key2 && dest.key()==key1)){
      edgeList.erase(it);
      // remove from adjList
      typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator it1 = adjList.find(key1);
      (it1->second).remove(it);
      typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator it2 = adjList.find(key2);
      (it2->second).remove(it);
      return;
    }
  }
}


/**
* Removes an Edge from the Graph given by the location of the given iterator into the edge list.
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
  E edge = *it;
  Vertex source = edge.source();
  Vertex dest = edge.dest();
  edgeList.erase(it);
  // remove from adjList
  typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator it1 = adjList.find(source.key());
  (it1->second).remove(it);
  typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator it2 = adjList.find(dest.key());
  (it2->second).remove(it);
  return;
}


/**
* Return the list of incident edges from a given vertex.
* For the directed case, consider all edges that has the vertex as either a source or destination.
* @param key The key of the given vertex
* @return The list edges (by reference) that are adjacent to the given vertex
*/
template <class V, class E>
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {//clear
  // TODO: Part 2
  std::list<std::reference_wrapper<E>> edges;
  std::list<edgeListIter> l = adjList.find(key)->second;
  edgeListIter ite;
  for (typename std::list<edgeListIter>::iterator it = l.begin(); it != l.end(); it++){
    ite = *it;
    edges.push_front(*ite);
  }
  return edges;
}


/**
* Return whether the two vertices are adjacent to one another. Consider both the undirected and directed cases.
* When the graph is directed, v1 and v2 are only adjacent if there is an edge from v1 to v2.
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {//clear
  // TODO: Part 2
  string lowerkey;
  E_byRef x = *(edgeList.begin());
  E e = x;
  if(e.directed()){
    lowerkey = key1;
  }else{
    lowerkey = degree(key1) < degree(key2) ? key1 : key2;
  }
  typename std::unordered_map<std::string, std::list<edgeListIter>>::const_iterator it = adjList.find(lowerkey);
  std::list<edgeListIter> elist = it->second;
  for(edgeListIter ite : elist){
    E edge = *ite;
    if(edge.dest()==key2){return true;}
  }
  return false;
}
