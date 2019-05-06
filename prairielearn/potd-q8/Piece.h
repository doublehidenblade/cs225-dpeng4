#pragma once
#include <string>
#include <sstream>
#include <iostream>
class Piece {
  public:
    Piece();
    std::string getType();
  private:
    std::string piece_type;
};
