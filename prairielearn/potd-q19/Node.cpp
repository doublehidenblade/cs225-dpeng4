#include "Node.h"
#include <iostream>

/** Create a new node and add it to the list, while keeping the list sorted.
*/
Node *insertSorted(Node *first, int data) {
  Node * input = new Node();
  input->data_ = data;
  input->next_ = NULL;//<<--otherwise OCCASSIONAL SEGFAULT!!!
  Node * cur = first;
  bool done = false;
  while(!done){
    if(first==NULL){
      first = input;
      return first;
    }
    if(cur->data_ == data){
      delete input;//<<--check(numNewNodes==3)
      return first;
    }
    if(first->data_ > data){
      input->next_ = first;
      return input;
    }

    if(cur->next_ == NULL){
      cur->next_ = input;
      return first;
    }
    cur = cur->next_;
  }
    return first;
}

/** Creates a new list (containing new nodes, allocated on the heap)
	that contains the set union of the values in both lists.
*/
Node *listUnion(Node *first, Node *second) {
    Node * out = NULL;
    while (first != NULL) {
        out = insertSorted(out,first->data_);
        first = first->next_;
    }
    while (second != NULL) {
        out = insertSorted(out, second->data_);
        second = second->next_;
    }
    return out;
}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
