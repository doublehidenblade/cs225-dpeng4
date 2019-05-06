#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {
    // your code here!
    string result;
    Node *node = head;
    if(head==NULL){
      result = "Empty list";
      return result;
    }
    int count = 0;
    while(node!=NULL){
      if(count!=0){
        result = result + " -> ";
      }
      result = result + "Node " + to_string(count) + ": ";
      result = result + to_string(node->data_);
      node = node->next_;
      count++;
    }
    return result;
}
