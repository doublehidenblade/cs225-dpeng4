#include "Node.h"
#include <iostream>
#include <stack>

using namespace std;

Node *listSymmetricDifference(Node *first, Node *second) {
  // your code here
  Node *third = NULL;
  Node *iter3 = third;
  Node *check3 = third;
  Node *iter1 = first;
  Node *iter2 = second;
  Node *prev;
  int flag = 0;
  int exist = 0;
  while(iter1!=NULL){
    check3 = third;
    while(check3!=NULL){
      if(iter1->data_==check3->data_){
        exist = 1;
      }
      check3 = check3->next_;
    }
    if(exist == 1){
      iter1 = iter1->next_;
      exist = 0;
      continue;
    }
    exist = 0;
    iter3 = new Node();
    iter3->data_ = iter1->data_;
    iter3->next_ = NULL;
    if(flag==0){
      third = iter3;
      flag = 1;
    }else{
      prev->next_ = iter3;
    }
    prev = iter3;
    iter3 = third->next_;
    iter1 = iter1->next_;
  }
  iter3 = third;
  prev = iter3;
  //first elements all in (no duplicate)
  std::cout<<"phase 1 check"<<std::endl;
  Node *debug = third;
  while(debug!=NULL){
    std::cout<<debug->data_<<std::endl;
    debug = debug->next_;
  }
  std::cout<<"check done"<<std::endl;

  stack<int> s;
  exist = 0;
  while(iter2!=NULL){
    check3 = third;
    while(check3!=NULL){
      if(iter2->data_==check3->data_){
        s.push(iter2->data_);
        exist = 1;
      }
      check3 = check3->next_;
    }
    if(exist == 1){
      iter2 = iter2->next_;
      exist = 0;
      continue;
    }
    exist = 0;//just making sure exist is reset
    iter3 = new Node();//element in second not existing, add
    std::cout<<"adding: "<<iter2->data_<<std::endl;
    iter3->data_ = iter2->data_;
    iter3->next_ = NULL;
    if(flag==0){
      third = iter3;
      flag = 1;
    }else{
      prev->next_ = iter3;
    }
    prev = iter3;
    iter3 = third->next_;
    iter2 = iter2->next_;
  }
  std::cout<<"phase 2 check"<<std::endl;
  debug = third;
  while(debug!=NULL){
    std::cout<<debug->data_<<std::endl;
    debug = debug->next_;
  }
  std::cout<<"check done"<<std::endl;

  //second elements in, start removing duplicate from stack
  while(!s.empty()){
    std::cout<<"stack top: "<<s.top()<<std::endl;
    check3 = third;
    while(check3!=NULL){
      if(s.top()==check3->data_){
        if(check3==third){
          third = check3->next_;
          delete check3;
        }else{
          prev->next_ = check3->next_;
          delete check3;
        }
        break;
      }
      prev = check3;
      check3 = check3->next_;
    }
    s.pop();
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
