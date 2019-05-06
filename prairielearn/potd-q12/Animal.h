// Animal.h
#include <iostream>
#include <string>
class Animal{
public:
  Animal();
  Animal(std::string, std::string);
  std::string getType();
  void setType(std::string);
  std::string getFood();
  void setFood(std::string);
  std::string print();
private:
  std::string type_;
  std::string food_;
};
