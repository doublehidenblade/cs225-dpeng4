/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

#include <iostream>


template <class K, class V>
typename AVLTree<K, V>::Node*& AVLTree<K, V>::iop(Node*& subtree, Node *&predecessor, int key){
  // std::cout<<"searching iop"<<std::endl;
  if(subtree==NULL){
    return predecessor;
  }
  Node *& res = iop(subtree->left, subtree, key);
  if(subtree->key == key){
    // std::cout<<"iop: "<<predecessor->key<<std::endl;
    return res;
  }
  // std::cout<<"iop fell thru "<<subtree->key<<std::endl;
  return iop(subtree->right, subtree, key);
}

template <class K, class V>
int AVLTree<K, V>::reheight(Node*& subtree){
  if (subtree==NULL){return -1;}
  if (subtree->left==NULL && subtree->right==NULL){
    subtree->height = 0;
    return 0;
  }
  subtree->height = 1 + std::max(reheight(subtree->left), reheight(subtree->right));
  return subtree->height;
}


template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node * temp = t->right;
    t->right = temp->left;
    temp->left = t;
    t = temp;
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node * temp = t->left;
    t->left = temp->right;
    temp->right = t;
    t = temp;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{ // your code here
  reheight(subtree);
  // std::cout<<"rebalancing "<<subtree->key<<std::endl;
  // std::cout<<"height "<<subtree->height<<std::endl;
  // std::cout<<"balance factor: "<<balancefactor(subtree)<<std::endl;
  // if(subtree->left!=NULL) std::cout<<"balance of left: "<<balancefactor(subtree->left)<<std::endl;
  // if(subtree->right!=NULL) std::cout<<"balance of right: "<<balancefactor(subtree->right)<<std::endl;
  if(balancefactor(subtree)<=-2 && subtree->left!=NULL && balancefactor(subtree->left)==-1){
    // std::cout<<"R"<<std::endl;
    rotateRight(subtree);
    return;
  }
  if(balancefactor(subtree)>=2 && subtree->right!=NULL && balancefactor(subtree->right)==1){
    // std::cout<<"L"<<std::endl;
    rotateLeft(subtree);
    return;
  }
  if(balancefactor(subtree)<=-2 && subtree->left!=NULL && balancefactor(subtree->left)==1){
    // std::cout<<"LR"<<std::endl;
    rotateLeftRight(subtree);
    return;
  }
  if(balancefactor(subtree)>=2 && subtree->right!=NULL && balancefactor(subtree->right)==-1){
    // std::cout<<"RL"<<std::endl;
    rotateRightLeft(subtree);
    return;
  }
}

template <class K, class V>
int AVLTree<K, V>::balancefactor(Node*& subtree)
{
    int balancefactor = 0;
    if(subtree->right==NULL && subtree->left==NULL){
      return balancefactor;
    }
    if(subtree->right==NULL){
      balancefactor = -1 - subtree->left->height;
      // std::cout<<__LINE__<<std::endl;
      return balancefactor;
    }
    if(subtree->left==NULL){
      // std::cout<<__LINE__<<std::endl;
      balancefactor = subtree->right->height + 1;
      return balancefactor;
    }
    balancefactor = subtree->right->height - subtree->left->height;
    // std::cout<<__LINE__<<std::endl;
    return balancefactor;
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    // std::cout<<"___________inserting "<<key<<std::endl;
    insert(root, key, value);
    return;
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if(subtree == NULL){
      subtree = new Node(key, value);
      return;
    }
    if (subtree->key > key && subtree->left == NULL){
      subtree->left = new Node(key, value);
      if(subtree->right==NULL){
        subtree->height = subtree->height + 1;
      }
      return;
    }
    if (subtree->key < key && subtree->right == NULL){
      subtree->right = new Node(key, value);
      if(subtree->left==NULL){
        subtree->height = subtree->height+1;
      }
      return;
    }
    if (subtree->key > key){
        insert(subtree->left, key, value);
        subtree->height = subtree->left->height + 1 > subtree->height ? subtree->left->height + 1 : subtree->height;
        rebalance(subtree);
        reheight(subtree);
        return;
    }else{
        insert(subtree->right, key, value);
        subtree->height = subtree->right->height + 1 > subtree->height ? subtree->right->height + 1 : subtree->height;
        rebalance(subtree);
        return;
    }
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{

    remove(root, key);
    rebalance(root);
    reheight(root);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
        rebalance(subtree);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
        rebalance(subtree);
    } else {
      // std::cout<<"___________removing "<<key<<std::endl;
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            // std::cout<<"leaf "<<subtree->key<<" removed"<<std::endl;
            delete(subtree);
            subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node *& pre = iop(subtree->left, subtree, key);
            // std::cout<<"found iop: "<<pre->key<<std::endl;
            // std::cout<<"swapping "<<pre->key<<" with "<<subtree->key<<std::endl;
            swap(pre, subtree);
            // std::cout<<"remove "<<key<<"from "<<subtree->key<<std::endl;
            remove(pre, key);
            rebalance(subtree);
        } else {
            /* one-child remove */
            // your code here
            if(subtree->left!=NULL){
              swap(subtree, subtree->left);
              delete(subtree->left);
              subtree->left = NULL;
              rebalance(subtree);
            }else{
              swap(subtree, subtree->right);
              delete(subtree->right);
              subtree->right = NULL;
              rebalance(subtree);
            }
        }
        // your code here
    }
}
