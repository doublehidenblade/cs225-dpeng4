#include "TreeNode.h"

#include <cstddef>
#include <iostream>
#include <queue>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) { }

int TreeNode::getHeight() {
  TreeNode *root = this;
  if (root == NULL)
      return 0;

  // Create an empty queue for level order tarversal
  queue<TreeNode *> q;

  // Enqueue Root and initialize height
  q.push(root);
  int height = 0;

  while (1)
  {
      // nodeCount (queue size) indicates number of nodes
      // at current lelvel.
      int nodeCount = q.size();
      if (nodeCount == 0)
          return height-1;

      height++;

      // Dequeue all nodes of current level and Enqueue all
      // nodes of next level
      while (nodeCount > 0)
      {
          TreeNode *node = q.front();
          q.pop();
          if (node->left_ != NULL)
              q.push(node->left_);
          if (node->right_ != NULL)
              q.push(node->right_);
          nodeCount--;
      }
  }
}
