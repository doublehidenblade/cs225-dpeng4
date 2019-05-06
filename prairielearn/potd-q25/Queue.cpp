#include "Queue.h"
#include <queue>
#include <iostream>

Queue::Queue() {
  //std::cout<<"here"<<std::endl;
  capacity = 10;
  arr = new int[capacity];
  front = 0;
  back = 0;
  count = 0;
}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Queue::size() const {
  return count;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Queue::isEmpty() const {
  return (count==0);
}

// `void enqueue(int val)` - enqueue an item to the queue in O(1) time
void Queue::enqueue(int value) {
  arr[back] = value;
  back++;
  count++;
  return;
}

// `int dequeue()` - removes an item off the queue and returns the value in O(1) time
int Queue::dequeue() {
  int res = arr[front];
  front++;
  count--;
  return res;
}
