#include "potd.h"
#include <iostream>
#include <string>

// Your code here!
/** Returns the sum of elements between start to end.
	The value at start is included, while the value at end is not.
	*/
double sum(vector<double>::iterator start, vector<double>::iterator end){
  int res=0;
  for(vector<double>::iterator i=start;i<end;i++){
    res = res + *i;
  }
  return res;
}

/** Returns an iterator that points to the element with the largest value between start and end. */
vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end){
  int res=-99;
  vector<double>::iterator iter;
  for(vector<double>::iterator i=start;i<end;i++){
    if(res<=(*i)){
      res = *i;
      iter = i;
    }
  }
  return iter;
}

/** Sort, in descending order, part of an array between start to end.
	Hint: use max_iter.
*/
void sort_vector(vector<double>::iterator start, vector<double>::iterator end){
  if(start==end){
    return;
  }
  int temp = *start;
  *start = *(max_iter(start, end));
  *(max_iter(start, end)) = temp;
  vector<double>::iterator next = ++start;
  sort_vector(next,end);
  return;
}
