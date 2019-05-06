// your code here
#include "Food.h"
#include "q5.h"
#include <iostream>
using namespace std;

int main(){
  Food *food = new Food();
  cout << "You have " << food->get_quantity() << " " << food->get_name() << "s." << endl;
  increase_quantity(food);
  cout << "You have " << food->get_quantity() << " " << food->get_name() << "s." << endl;
  return 1;
}
