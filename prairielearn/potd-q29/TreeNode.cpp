#include "TreeNode.h"
#include <iostream>
#include <stack>

TreeNode * deleteNode(TreeNode* root, int key) {
  // your code here
  std::stack<TreeNode *> s;
  TreeNode * curr = root;
  TreeNode * iop = curr;
  TreeNode * ios = curr;
  TreeNode * parent = NULL;
  while(curr!=NULL || !s.empty()){
    while(curr!=NULL){
      if((curr->left_!=NULL && curr->left_->val_==key) || (curr->right_!=NULL && curr->right_->val_==key)){
        parent = curr;
      }
      s.push(curr);
      curr = curr->left_;
    }
    curr = s.top();
    s.pop();
    if(curr->val_==key){
      ios = curr->right_;
      break;
    }
    iop = curr;
    curr = curr->right_;
  }
  if(curr==NULL){
    return root;
  }
  //delete leaf
  if(curr->left_==NULL && curr->right_==NULL){
    if(parent->left_==curr){
      parent->left_ = NULL;
    }else{
      parent->right_ = NULL;
    }
    return root;
  }
  //delete node with 1 child
  if(curr->left_==NULL || curr->right_==NULL){
    if(parent->left_==curr){//it's the left child we need to delete
      if(curr->left_!=NULL){//the grandchild is left
        parent->left_ = curr->left_;
      }else{
        parent->left_ = curr->right_;
      }
    }else{//it's the right child we need to delete
      if(curr->right_!=NULL){//the grandchild is left
        parent->right_ = curr->right_;
      }else{
        parent->right_ = curr->left_;
      }
    }
    return root;
  }
  // std::cout<<ios->val_<<std::endl;
  //delete node with 2 child
  if(parent->val_>ios->val_){//it's the left child we need to delete
    parent->left_ = ios;
    ios->left_ = curr->left_;
  }else{//it's the right child we need to delete
    parent->right_ = ios;
    ios->left_ = curr->left_;
  }
  delete curr;
  return root;
}


void inorderPrint(TreeNode* node)
{
    if (!node)  return;
    inorderPrint(node->left_);
    std::cout << node->val_ << " ";
    inorderPrint(node->right_);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
