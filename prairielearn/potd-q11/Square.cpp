#include <iostream>
#include <string>

#include "Square.h"

Square & Square::operator=(const Square & other){
  this->setName(other.getName());
  this->setLength(other.getLength());
  return *this;
}

Square Square::operator+(const Square & other){
  Square * Bigsquare = new Square;
  Bigsquare->setName(this->getName() + other.getName());
  Bigsquare->setLength(this->getLength() + other.getLength());
  return *Bigsquare;
}

Square::Square() {
    name = "mysquare";
    lengthptr = new double;
    *lengthptr = 2.0;
}

void Square::setName(std::string newName) {
  name = newName;
}

void Square::setLength(double newVal) {
  *lengthptr = newVal;
}

std::string Square::getName() const {
  return name;
}

double Square::getLength() const {
  return *lengthptr;
}

Square::Square(const Square & other) {
    name = other.getName();
    lengthptr = new double;
    *lengthptr = other.getLength();
}

Square::~Square() {
    delete lengthptr;
}
