#pragma once
#include "Piece.h"
#include <string>
#include <sstream>
#include <iostream>
class Queen : public Piece{
  public:
    Queen();
    std::string getType();
  private:
    std::string piece_type;
};
