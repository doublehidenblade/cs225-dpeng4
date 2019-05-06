#include "Queen.h"
#include <string>
#include <sstream>
#include <iostream>
// implementation of class queen
Queen::Queen(){

  piece_type = "Queen";

}
std::string Queen::getType(){
  return piece_type;
}
