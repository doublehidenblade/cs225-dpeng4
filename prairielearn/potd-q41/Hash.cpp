#include "Hash.h"
#include <string>
#include <iostream>
#include <stack>

unsigned long bernstein(std::string str, int M)
{
	unsigned long b_hash = 5381;
	//Your code here
	for (unsigned i=0;i<str.size();i++){
		b_hash = b_hash * 33 + str[i];
	}
	return b_hash % M;
}

std::string reverse(std::string str)
{
    std::string output = "";
	//Your code here
	std::stack<char> s;
	for(unsigned i=0;i<str.size();i++){
		s.push(str[i]);
	}
	while(!s.empty()){
		output.push_back(s.top());
		s.pop();
	}
	return output;
}
