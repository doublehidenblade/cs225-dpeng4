/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if(first[curDim] == second[curDim]){
      return first < second;
    }
    return first[curDim] <= second[curDim];
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
     unsigned curdis = 0;
     unsigned potdis = 0;
     for(unsigned i=0;i<Dim;i++){
       curdis = curdis + abs(target[i]-currentBest[i])*abs(target[i]-currentBest[i]);
       potdis = potdis + abs(target[i]-potential[i])*abs(target[i]-potential[i]);
     }
     if(potdis == curdis){
       // std::cout<<"tie breaking"<<std::endl;
       // currentBest.print();
       // potential.print();
       return potential<currentBest;
     }
     return (potdis) < (curdis);
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
     // std::cout<<"=================Building tree==============="<<std::endl;
     if(newPoints.size()==0){
       // std::cout<<"empty newPoints"<<std::endl;
       return;}
     root = recurse(newPoints, 0);
     // std::cout<<"*****************Tree built******************"<<std::endl;
     // this->printTree(cout);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode * KDTree<Dim>::recurse(const vector<Point<Dim>>& newPoints, unsigned d)
{
    /**
     * @todo Implement this function!
     */
     if(newPoints.size()==0){
       return NULL;}
  unsigned m = newPoints.size()>0 ? (newPoints.size() - 1)/2 : 0;

    // std::cout<<"printing newPoints: "<<std::endl;
    // for(unsigned i=0;i<newPoints.size();i++){
    //   newPoints[i].print();
    // }
    // std::cout<<"current dim: "<<d<<std::endl;
    // std::cout<<"looking for "<<m<<"th smallest."<<std::endl;

  Point<Dim> r = findNthsmallest(newPoints, 0, newPoints.size()-1, m, d);

  // std::cout<<"found Nth smallest: "<<std::endl;
  // r.print();

  KDTreeNode *newroot = new KDTreeNode(r);
  vector<Point<Dim>> sublistl;
  vector<Point<Dim>> sublistr;
  getsub(sublistl, sublistr, newPoints, r, d);
  newroot->left = recurse(sublistl, (d+1)%Dim);
  newroot->right = recurse(sublistr, (d+1)%Dim);
  return newroot;
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNthsmallest(vector<Point<Dim>> copyPoints, unsigned first, unsigned last, unsigned n, unsigned d)
{
  // std::cout<<"------------"<<std::endl;
  unsigned index = first;
  Point<Dim> reference = copyPoints[last];
  for(unsigned i=first; i<last;i++){
    if(smallerDimVal(copyPoints[i], reference, d)){
      // std::cout<<"swaping "<<copyPoints[i]<<" to front since it smaller than "<<reference<<std::endl;
      swap(copyPoints[index], copyPoints[i]);
      index++;
    }
  }
  swap(copyPoints[index], copyPoints[last]);
  // std::cout<<"index: "<<index<<" first: "<<first<<" last:"<<last<< " n: "<<n<<std::endl;
  if(index-first == n){return copyPoints[index];}
  if(index-first > n){return findNthsmallest(copyPoints, first, index-1, n, d);}
  return findNthsmallest(copyPoints, index+1, last, n-index+first-1, d);
}

template <int Dim>
void KDTree<Dim>::getsub(vector<Point<Dim>>&sublistl, vector<Point<Dim>>& sublistr, const vector<Point<Dim>> &newPoints, Point<Dim> r, unsigned d)
{
  // std::cout<<"getting sublists"<<std::endl;
  vector<Point<Dim>> retPoints;
  for(unsigned i=0;i<newPoints.size();i++){
    if(newPoints[i] == r){continue;}
    if(smallerDimVal(newPoints[i], r, d)){
      sublistl.push_back(newPoints[i]);
    }else{
      sublistr.push_back(newPoints[i]);
    }
  }
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */

}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    // std::cout<<"query: ";
    // query.print();
    Point<Dim> best = Point<Dim>();
    for (int i = 0; i < Dim; ++i){best[i] = 999;}
    best = recursiveFind(query, best, root, 0);
    return best;
}

template <int Dim>
Point<Dim> KDTree<Dim>::recursiveFind(const Point<Dim>& query, Point<Dim>& best, KDTreeNode *subroot, unsigned d) const
{
    /**
     * @todo Implement this function!
     */
    // std::cout<<"visiting"<<subroot->point<<std::endl;
    // std::cout<<"current best"<<best<<std::endl;
    if(subroot->left==NULL && subroot->right==NULL){return subroot->point;}
    bool wentleft = 0;
    Point<Dim> found;
    if(smallerDimVal(query, subroot->point, d)){
      if(subroot->left==NULL){return subroot->point;}
      found = recursiveFind(query, best, subroot->left, (d+1)%Dim);
      wentleft = 1;
    }else{
        if(subroot->right==NULL){return subroot->point;}
        found = recursiveFind(query, best, subroot->right, (d+1)%Dim);
      }
    if(shouldReplace(query, best, found)){best = found;}

    //check root
    if(shouldReplace(query, best, subroot->point)){best = subroot->point;}

    //check if distance from the target point to the splitting plane of root node is within current radius
    unsigned radius = 0;
    for(unsigned i=0;i<Dim;i++){
      radius = radius + abs(query[i]-best[i])*abs(query[i]-best[i]);
    }
    unsigned distance = (query[d] - subroot->point[d])*(query[d] - subroot->point[d]);
    // std::cout<<"distance: "<<distance<<std::endl;
    // std::cout<<"radius: "<<radius<<std::endl;
    if(distance <= radius){
      //search other subtree
      if(wentleft){
        if(subroot->right==NULL){return best;}
        found = recursiveFind(query, best, subroot->right, (d+1)%Dim);}
      else{
        if(subroot->left==NULL){return best;}
        found = recursiveFind(query, best, subroot->left, (d+1)%Dim);}
      if(shouldReplace(query, best, found)){best = found;}
    }
    return best;
}
