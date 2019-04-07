/* Your code here! */
#pragma once

#include <vector>

class DisjointSets
{
  private:
    std::vector<int> elems;
  public:
    DisjointSets();
    void addelements (int num);
     	// Creates n unconnected root nodes at the end of the vector.

    int find (int elem);
     	// This function should compress paths and works as described in lecture.

    int findrecursive (int elem, int path);

    void setunion (int a, int b);
     	// This function should be implemented as union-by-size.

    int size (int elem);
     	// This function should return the number of nodes in the up-tree containing the element.

};
