// Pet.cpp
#include <string>
#include <iostream>
#include "Pet.h"

Pet::Pet():type_("cat"),
food_("fish"),
name_("Fluffy"),
owner_name_("Cinda"){}
Pet::Pet(std::string type, std::string food, std::string name, std::string owner_name):
  type_(type),
  food_(food),
  name_(name),
  owner_name_(owner_name){}
std::string Pet::print(){
  return "My name is " + name_;
}
void Pet::setType(std::string type){
  type_ = type;
}
void Pet::setFood(std::string food){
  food_ = food;
}
void Pet::setName(std::string name){
  name_ = name;
}
void Pet::setOwnerName(std::string owner_name){
  owner_name_ = owner_name;
}
std::string Pet::getType(){
  return type_;
}
std::string Pet::getName(){
  return name_;
}
std::string Pet::getFood()
{
  return food_;
}
std::string Pet::getOwnerName(){
  return owner_name_;
}
