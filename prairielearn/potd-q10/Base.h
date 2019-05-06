#pragma once
#include <string>
#include <iostream>

class Base{
public:
  Base();
  // Base(const Base & other);
  virtual ~Base();
  std::string foo();
  virtual std::string bar();

private:

};
