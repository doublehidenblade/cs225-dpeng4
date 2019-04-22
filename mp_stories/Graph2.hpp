#include <queue>
#include <algorithm>
#include <string>
#include <list>
#include <queue>
#include <map>

/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  // TODO: Part 3
  // BFS draw map
  std::list<std::string> path;
  std::map<std::string, std::string> m;
  std::queue<std::string> q;
  string cur = start;
  q.push(start);
  std::list<E_byRef> edges;
  while(!q.empty()){
    cur = q.front();
    q.pop();
    if(cur==end){
      break;
    }
    edges = incidentEdges(cur);
    for(E_byRef temp : edges){
      E e = temp;
      string child = e.source()==cur ? e.dest().key() : e.source().key();
      // check counting discoverer
      std::map<std::string, std::string>::iterator it = m.find(cur);
      if(child==it->second){continue;}
      // record discoverer
      q.push(child);
      std::pair<std::string, std::string> p (child, cur);
      m.insert(p);
    }
  }
  // use map
  cur = end;
  while(true){
    path.push_front(cur);
    if(cur==start){break;}
    std::map<std::string, std::string>::iterator it = m.find(cur);
    cur = it->second;
  }
  return path;
}
