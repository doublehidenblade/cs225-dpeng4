#include "TreeNode.h"
#include <algorithm>


void rightRotate(TreeNode* root) {

    // Your code here
    TreeNode * temp = root->left_;
    root->left_ = temp->right_;
    if(temp->right_!=NULL){
      temp->right_->parent_ = root;
    }
    temp->right_ = root;
    temp->parent_ = root->parent_;
    root->parent_ = temp;
    root = temp;
}


void leftRotate(TreeNode* root) {

    // your code here
    TreeNode * temp = root->right_;
    root->right_ = temp->left_;
    if(temp->left_!=NULL){
      temp->left_->parent_ = root;
    }
    temp->left_ = root;
    temp->parent_ = root->parent_;
    root->parent_ = temp;
    root = temp;
}



void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
