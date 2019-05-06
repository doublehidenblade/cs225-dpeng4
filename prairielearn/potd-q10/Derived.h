#pragma once
#include <string>
#include <iostream>
#include "Base.h"

class Derived : public Base{
public:
  Derived();
  //Derived(const Derived & other);
  virtual ~Derived();
  std::string foo();
  virtual std::string bar();
private:

};
