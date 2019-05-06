#include "TreeNode.h"
TreeNode* findUnbalanced(TreeNode* root);
int getheight(int height,TreeNode* root);
TreeNode* findLastUnbalanced(TreeNode* root) {
  // your code here
  TreeNode* last=findUnbalanced(root);
  TreeNode* current=root;
  while(current->right_!=NULL || current->left_!=NULL){
    if(current->right_==NULL){
      if(findUnbalanced(current->left_)!=NULL){
        last=current->left_;
        current=current->left_;
      }
      else{
        current=current->left_;
      }
    }
    else if(current->left_==NULL){
      if(findUnbalanced(current->right_)!=NULL){
        last=current->right_;
        current=current->right_;
      }
      else{
        current=current->right_;
      }
    }
    else{
      if(findUnbalanced(current->left_)!=NULL){
        last=current->left_;
        current=current->left_;
      }
      else{
        current=current->left_;
      }
      if(findUnbalanced(current->right_)!=NULL){
        last=current->right_;
        current=current->right_;
      }
      else{
        current=current->right_;
      }
    }
  }
  return last;
}

TreeNode* findUnbalanced(TreeNode* root){
  int cl=0;
  int cr=0;
  if(root->left_!=NULL){
    cl=getheight(cl,root->left_);
  }
  else{
    cl=-1;
  }
  if(root->right_!=NULL){
    cr=getheight(cr,root->right_);
  }
  else{
    cr=-1;
  }
  if(cl-cr>1 || cr-cl>1){
    return root;
  }
  else{
    return NULL;
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

int getheight(int height,TreeNode* root){
    TreeNode* current=root;
    int cl=0;
    int cr=0;
    if(current->left_==NULL && current->right_==NULL){
      return 0;
    }
    if(root->left_!=NULL){
      cl=1+getheight(height,root->left_);
    }

    if(root->right_!=NULL){
      cr=1+getheight(height,root->right_);
    }

    if(cl>cr){
      return cl;
    }
    else if(cr>cl){
      return cr;
    }
    return 0;
}
