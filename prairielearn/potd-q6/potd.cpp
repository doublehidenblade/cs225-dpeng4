// your code here!
#include "potd.h"
#include <iostream>
namespace potd {
  int *raise(int *arr){
    int size = int(sizeof(arr)-1);
    //std::cout << size << std::endl;
    int* new_arr = new int[size];
    for(int i = 0; i<size;i++){
      new_arr[i] = arr[i];
    }
    for(int i = 0; i<size-2;i++){
      for(int p = 1; p<arr[i+1];p++){
        //std::cout << p << std::endl;
        new_arr[i] = new_arr[i] * arr[i];
      }
      //std::cout << new_arr[i] << std::endl;
    }
    return new_arr;
  }
}
