/* Your code here! */
#include "dsets.h"
#include <iostream>

DisjointSets::DisjointSets(){
  elems.clear();
}

void DisjointSets::addelements (int num){
  // Creates n unconnected root nodes at the end of the vector.
  for(int i=0;i<num;i++){
    elems.push_back(-1);
  }
}

int DisjointSets::find (int elem){
  // This function should compress paths and works as described in lecture.
  return findrecursive(elem, 1);
}

int DisjointSets::findrecursive (int elem, int path){
  if(elems[elem] < 0){
    elems[elem] = std::min(elems[elem], 0 - path);
    return elem;}
  elems[elem] = findrecursive(elems[elem], path+1);
  return elems[elem];
}

void DisjointSets::setunion (int a, int b){
  // This function should be implemented as union-by-size.
  int rootA = find(a);
  int rootB = find(b);
  if(rootA == rootB){return;}
  if(size(a) <= size(b)){
    elems[rootB] -= size(a);
    elems[rootA] = rootB;
  }else{
    elems[rootA] -= size(b);
    elems[rootB] = rootA;
  }
  // for(unsigned i=0;i<elems.size();i++){
  //   if(i%5==4){
  //     std::cout<<elems[i]<<"; ";
  //   }else{
  //   std::cout<<elems[i]<<",";
  //   }
  // }
  // std::cout<<std::endl;
}


int DisjointSets::size (int elem){
  // This function should return the number of nodes in the up-tree containing the element.
  return abs(elems[find(elem)]);
}
