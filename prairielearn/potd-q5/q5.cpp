// your code here
#include "Food.h"
#include "q5.h"

void increase_quantity(Food * food){
  int q = food->get_quantity();
  q ++;
  food->set_quantity(q);
}
