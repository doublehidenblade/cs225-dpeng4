#include <vector>
#include "BTreeNode.h"
#include <iostream>

BTreeNode* find(BTreeNode* root, int key) {
    // Your Code Here
  if (root==NULL) return NULL;
  if (root->is_leaf_){
    for (size_t i=0; i<root->elements_.size(); i++){
      if (root->elements_[i]==key){
        return root;
      }
    }
    return NULL;
  }
  if(key<root->elements_[0]){
    return find(root->children_[0], key);
  }
  if(key>root->elements_.back()){
    return find(root->children_.back(), key);
  }

  for (size_t i=0; i<root->elements_.size(); i++){
    if (root->elements_[i]==key){
      return root;
    }
    if(key>root->elements_[i] && key<root->elements_[i+1]){
      return find(root->children_[i+1],key);
    }
  }
  return NULL;
}
