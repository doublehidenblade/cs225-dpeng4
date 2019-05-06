#include "Base.h"
#include <string>
#include <iostream>

Base::Base(){

}
/*
Base::Base(const Base & other){

}*/

Base::~Base(){

}

std::string Base::foo(){
  return "Sam I Am";
}

std::string Base::bar(){
  return "Green Eggs";
}
