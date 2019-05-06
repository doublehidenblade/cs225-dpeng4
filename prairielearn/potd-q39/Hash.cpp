#include <vector>
#include <string>
#include "Hash.h"
#include <iostream>
#include <algorithm>


using namespace std;

int hashFunction(string s, int M) {
   // Your Code Here
   //hash function to sum up the ASCII characters of the letters of the string
   int val = 0;
   for(unsigned i=0;i<s.size();i++){
     val = val + int(s[i]);
   }
   // std::cout<<"cur val: "<<std::endl;
   // std::cout<<val%M<<std::endl;
   return val%M;
 }

int countCollisions (int M, vector<string> inputs) {
	int collisions = 0;
	// Your Code Here
  vector<int> record;
  int val = 0;
  for(unsigned i=0;i<inputs.size();i++){
    val = hashFunction(inputs[i], M);
    if(std::find(record.begin(), record.end(), val)==record.end()){
      record.push_back(val);
    }else{
      collisions = collisions + 1;
    }
  }
	return collisions;
}
