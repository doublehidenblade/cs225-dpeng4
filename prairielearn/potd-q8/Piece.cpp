#include "Piece.h"
#include <string>
#include <sstream>
#include <iostream>
// implementation of class piece

Piece::Piece(){
  piece_type = "Unknown Piece Type";
}
std::string Piece::getType(){
  return piece_type;
}
