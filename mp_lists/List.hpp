/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */
#include <stack>
template <class T>
List<T>::List() {
  // @TODO: graded in MP3.1
    head_ = NULL;//deleted listNode *
    tail_ = NULL;//deleted listNode *
    length_ = 0;//
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(tail_->next);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  ListNode * curr = head_;
  ListNode * prev = head_;
  if(curr==NULL){
    return;
  }
  while(prev!=NULL){
    curr = curr->next;
    delete prev;
    prev = curr;
  }
  return;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  ListNode * newNode = new ListNode(ndata);
  newNode -> next = head_;
  newNode -> prev = NULL;
  if (head_ != NULL) {
    head_ -> prev = newNode;
  }
  head_ = newNode;
  if (tail_ == NULL) {
    tail_ = newNode;
  }

  length_++;

}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  ListNode * newNode = new ListNode(ndata);
  newNode -> next = NULL;
  newNode -> prev = tail_;
  if (tail_ != NULL) {
    tail_->next = newNode;
  }
  tail_ = newNode;

  if (head_ == NULL) {
    head_ = newNode;
  }
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  ListNode * curr = start;
    if(splitPoint<1){
        return start;
    }
  for (int i = 0; i < splitPoint && curr != NULL; i++) {//
    curr = curr->next;
  }
  if (curr != NULL && curr->prev!=NULL) {//added "&& cyrr->prev!=NULL"
      curr->prev->next = NULL;
      curr->prev = NULL;
  }
  return curr;//
}

/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall() {
  /// @todo Graded in MP3.1
  while(head_!=tail_&&head_->next!=tail_){
    head_ = head_->next;//skip 1
    head_->prev->next = head_->next;//connect 1 to 3
    head_->next->prev = head_->prev;//connect 3 to 1
    tail_->next = head_;//connect 8 to 2
    head_->prev = tail_;//connect 2 to 8
    tail_ = head_;//tail become 2 as well as curr
    head_ = head_->next;//curr become 3
    tail_->next = NULL;//update 2's next
  }
  head_ = tail_;
  while(head_->prev != NULL){
    head_ = head_->prev;
  }
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  ListNode * iter1 = startPoint;
  ListNode * iter2 = endPoint;
  ListNode * temp;
  ListNode * before = startPoint->prev;
  ListNode * after = endPoint->next;

  if(startPoint==NULL || endPoint==NULL){
    return;
  }
  iter2 = iter1->next;
  while(true){//flip prev and end of curr, and increment iter1&2
    iter1->next = iter1->prev;
    iter1->prev = iter2;
    iter1 = iter2;
    if(iter1==after){
      break;
    }
    iter2 = iter2->next;
  }

  if(before!=NULL){
    before->next = endPoint;
  }
  if(after!=NULL){
    after->prev = startPoint;
  }
  endPoint->prev = before;
  startPoint->next = after;

  temp = startPoint;
  startPoint = endPoint;
  endPoint = temp;

  while(temp!=endPoint){
    std::cout<<temp->data<<std::endl;
    temp = temp->next;
  }
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  ListNode * iter1 = head_;
  ListNode * iter2;
  ListNode * temp;
  ListNode * originalHeadPrev = head_->prev;
  temp = tail_->next;
  while(true){
    iter2 = iter1;
    for(int i=0; i<n-1 && iter2!=tail_; i++){
      iter2 = iter2->next;
    }
    reverse(iter1,iter2);
    iter1 = iter2->next;
    if(iter1==temp){
      tail_ = iter2;
      break;
    }
  }
  while(head_->prev!=originalHeadPrev){//move head to new front
    head_ = head_->prev;
  }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    std::cout<<"done merge"<<std::endl;
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {///
  /// @todo Graded in MP3.2
  ListNode * result = NULL;
  ListNode * head;
  if(first==NULL){
    return second;
  }
  if(second==NULL){
    return first;
  }
  if(first->data < second->data){
    result = first;
    head = result;
    first = first->next;
  }else{
    result = second;
    head = second;
    second = second->next;
  }
  while(true){
    if(first==NULL){
      result->next = second;
      return head;
    }
    if(second==NULL){
      result->next = first;
      return head;
    }
    if(first->data < second->data){
      result->next = first;
      result = first;
      first = first->next;
    }else{
      result->next = second;
      result = second;
      second = second->next;
    }
  }
  second = NULL;
  return head;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
//  std::cout<<start->data<<std::endl;
  if (chainLength<=1){
      return start;
  }
    ListNode * otherHead = split(start, chainLength/2);
    // Recur for left and right halves
    start = mergesort(start, chainLength/2);
    otherHead = mergesort(otherHead, chainLength-chainLength/2);

    // Merge the two sorted halves
    return merge(start,otherHead);

}
