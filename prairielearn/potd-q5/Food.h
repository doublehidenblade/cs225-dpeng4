// Your code here
#pragma once
#ifndef _FOOD_H
#define _FOOD_H
#include <string>

using namespace std;
class Food{
  public:
    Food();
    string get_name();
    void set_name(string name);
    int get_quantity();
    void set_quantity(int quantity);
  private:
    string name_;
    int quantity_;
};


#endif
