#include "Node.h"
#include <iostream>

using namespace std;

Node *listIntersection(Node *first, Node *second) {
  Node *iter1 = first;
  Node *iter2 = second;
  Node *iter3 = NULL;
  Node *third = NULL;
  bool flag = 0;
  while(iter1!=NULL){
    iter2 = second;
    while(iter2!=NULL){
        if((iter1->data_) == (iter2->data_)){
          if(iter3!=NULL && iter1->data_==iter3->data_){
            iter2 = iter2->next_;
            continue;
          }
          Node *another = new Node();
          another->data_ = iter1->data_;
          another->next_ = NULL;
          if(flag==0){
            third=another;
            flag=1;
          }else{
            iter3->next_ = another;
          }
          iter3 = another;
        }
        iter2 = iter2->next_;
      }
      iter1 = iter1->next_;
    }

  return third;
}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
