#include "TreeNode.h"
#include <iostream>

int getheight(TreeNode *subroot);

bool isHeightBalanced(TreeNode* root) {
  // your code here
  std::cout<<root->val_<<"left h: "<<getheight(root->left_)<<"right h: "<<getheight(root->right_)<<std::endl;
  if((getheight(root->left_) - getheight(root->right_))<=1 && (getheight(root->left_) - getheight(root->right_))>=-1){
    return true;
  }else{
    return false;
  }
  return isHeightBalanced(root->left_) && isHeightBalanced(root->right_);
}

int getheight(TreeNode *subroot){
  if(subroot==NULL){
    return 0;
  }
  if(getheight(subroot->left_) > getheight(subroot->right_)){
    return 1 + getheight(subroot->left_);
  }else{
    return 1 + getheight(subroot->right_);
  }
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
