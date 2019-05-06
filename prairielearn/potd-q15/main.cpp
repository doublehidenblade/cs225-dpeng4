#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  //Node * head = NULL;
  //cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  /*
  Node * head = new Node();
  head->data_ = 10;
  head->next_ = NULL;
  cout << stringList(head) << endl;
  */
  // Test 3: A list with more than one node
  Node * head = new Node();
  head->data_ = 10;
  Node * node1 = new Node();
  Node * node2 = new Node();
  head->next_ = node1;
  node1->next_ = node2;
  node2->next_ = NULL;
  node1->data_ = 20;
  node2->data_ = 30;

  cout << stringList(head) << endl;
  return 0;
}
