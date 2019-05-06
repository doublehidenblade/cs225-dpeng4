#include <vector>
#include "BTreeNode.h"

std::vector<int> traverse(BTreeNode* root){
  std::vector<int> v;
  v = traverse(root, v);
  return v;
}

std::vector<int> traverse(BTreeNode* subroot, std::vector<int> res) {
    // your code here
    if(subroot==NULL) return res;
    if(subroot->is_leaf_){
      for(unsigned i=0;i<subroot->elements_.size();i++){
        res.push_back(subroot->elements_[i]);
      }
      return res;
    }
    for(unsigned i=0;i<=subroot->elements_.size();i++){
      res = traverse(subroot->children_[i], res);
      if(i>=subroot->elements_.size()) break;
      res.push_back(subroot->elements_[i]);
    }
    return res;
}
