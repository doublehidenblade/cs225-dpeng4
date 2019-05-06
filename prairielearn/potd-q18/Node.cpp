#include "Node.h"

void mergeList(Node *first, Node *second) {
  // your code here!
  Node * f = first;
  Node * s = second;
  Node * temp1;
  Node * temp2;
  while(f!=NULL && s!=NULL){
    temp1 = f->next_;
    f->next_ = s;
    temp2 = s->next_;
    if(temp1==NULL){
      return;
    }
    s->next_ = temp1;
    f = temp1;
    s = temp2;
  }
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
