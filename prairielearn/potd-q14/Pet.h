// Pet.h
#include <string>
#include <iostream>
#include "Animal.h"

class Pet : public Animal{
public:
  Pet();
  Pet(std::string type, std::string food, std::string name, std::string owner_name);
  std::string print();
  std::string getName();
  std::string getFood();
  std::string getType();
  std::string getOwnerName();
  void setFood(std::string food);
  void setType(std::string type);
  void setName(std::string name);
  void setOwnerName(std::string name);
protected:
    std::string type_;//<<--makin it private also works
private:

  std::string food_;
  std::string name_;
  std::string owner_name_;
};
