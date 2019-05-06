#include "TreeNode.h"

TreeNode::RotationType balanceTree(TreeNode*& subroot) {
	// Your code here
  if(getHeight(subroot->right_) - getHeight(subroot->left_)==2){
    if(getHeight(subroot->right_->right_) - getHeight(subroot->right_->left_)==1){
      return TreeNode::left;
    }
    if(getHeight(subroot->right_->right_) - getHeight(subroot->right_->left_)==-1){
      return TreeNode::rightLeft;
    }
  }
  if(getHeight(subroot->right_) - getHeight(subroot->left_)==-2){
    if(getHeight(subroot->left_->right_) - getHeight(subroot->left_->left_)==1){
      return TreeNode::leftRight;
    }
    if(getHeight(subroot->left_->right_) - getHeight(subroot->left_->left_)==-1){
      return TreeNode::right;
    }
  }

}
