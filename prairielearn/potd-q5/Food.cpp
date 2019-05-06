// Your code here
#include "Food.h"
#include <string>

Food::Food(){
  name_ = "Apple";
  quantity_ = 0;
}
void Food::set_name(string name){
  name_ = name;
  return;
}
string Food::get_name(){
  return name_;
}
void Food::set_quantity(int quantity){
  quantity_ = quantity;
  return;
}
int Food::get_quantity(){
  return quantity_;
}
