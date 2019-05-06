#pragma once
#include <string>
#include <iostream>
#include "Derived.h"
Derived::Derived(){

}
/*
Derived::Derived(const Derived & other){

}
*/
Derived::~Derived(){

}

std::string Derived::foo(){
  return "I will not eat them.";
}

std::string Derived::bar(){
  return "And Ham";
}
