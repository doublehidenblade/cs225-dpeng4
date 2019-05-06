#include "potd.h"
#include <iostream>

void insertSorted(Node **head, Node *insert) {
  // your code here!
  if(*head == NULL){
    *head = insert;
    return;
  }
  Node * curr = new Node();
  Node * prev = new Node();
  curr = *head;
  int count = 0;
  while(curr->next_!=NULL){
    if(curr->data_ > insert->data_){
      std::cout<<"curr: "<<curr->data_<<"insert:"<<insert->data_<<std::endl;
      insert->next_ = curr;
      prev->next_ = insert;
      if(count == 0){
        *head = insert;
      }
      count++;
      return;
    }
    prev = curr;
    curr = curr->next_;
  }
  if(curr->data_ < insert->data_){
    curr->next_ = insert;
    return;
  }else{
    insert->next_ = curr;
    prev->next_ = insert;
    return;
  }

}
