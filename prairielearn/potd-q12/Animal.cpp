// Animal.cpp
#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal(){
  type_ = "cat";
  food_ = "fish";
}
Animal::Animal(std::string type, std::string food){
  type_ = type;
  food_ = food;
}
std::string Animal::getType(){
  return this->type_;
}
void Animal::setType(std::string type){
  this->type_ = type;
}
std::string Animal::getFood(){
  return this->food_;
}

void Animal::setFood(std::string food){
  this->food_ = food;
}
std::string Animal::print(){
  return "I am a " + this->type_;
}
