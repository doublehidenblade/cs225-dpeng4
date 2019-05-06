/* Your code here! */
#include <string>
#include "hello.h"
#include <iostream>
#include <sstream>


std::string hello() {
  std::stringstream sstm;
  std::string message;
  int age = 21;
  std::string name = "Dingyu";
  sstm << "Hello world! My name is " << name <<  " and I am " << age << " years old.";
  message = sstm.str();
  return message;
}
