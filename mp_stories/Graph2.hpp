#include <queue>
#include <algorithm>
#include <string>
#include <list>

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
  std::list<std::string> path;
  std::unordered_map<string, string> prev;
  std::unordered_map<string, bool> visited;
  std::queue<string> q;

  q.push(start);
  prev[start] = "start";

  for(auto it : vertexMap){
    prev[it.first] = "empty";
  }

  while(!q.empty()){
    string curr = q.front();
    q.pop();
    for(auto it : vertexMap) {
      if(isAdjacent(curr,it.first) && prev[it.first] == "empty") {
        q.push(it.first);
        prev[it.first] = curr;
      }
    }
  }

  string temp = end;
  path.push_back(end);
  while(temp != start){
    path.push_back(prev[temp]);
    temp = prev[temp];
  }
  std::reverse(path.begin(),path.end());
  
  return path;
}

