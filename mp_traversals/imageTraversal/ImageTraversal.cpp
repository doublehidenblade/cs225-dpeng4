#include <cmath>
#include <iterator>
#include <iostream>
#include <vector>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
}

ImageTraversal::Iterator::Iterator(ImageTraversal *trav) {
  /** @todo [Part 1] */
}

ImageTraversal::Iterator::Iterator(ImageTraversal *trav, PNG pic, Point start, double in_tolerance):trav_(trav), png_(pic), pt_(start), tolerance_(in_tolerance) {
  /** @todo [Part 1] */
  trav_->add(pt_);
  record.push_back(pt_.x*1000+pt_.y);
  startpix = png_.getPixel(start.x, start.y);
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  Point right(pt_.x+1, pt_.y);
  Point below(pt_.x, pt_.y+1);
  Point left(pt_.x-1, pt_.y);
  Point above(pt_.x, pt_.y-1);
  if(pt_.x+1<png_.width()){
    if(calculateDelta(png_.getPixel(right.x, right.y), startpix)<tolerance_){
      if(std::find(record.begin(), record.end(), right.x*1000+right.y)==record.end()){
        trav_->add(right);
      }
    }
  }
  if(pt_.y+1<png_.height()){
    if(calculateDelta(png_.getPixel(below.x, below.y), startpix)<tolerance_){
      if(std::find(record.begin(), record.end(), below.x*1000+below.y)==record.end()){
        trav_->add(below);
      }
    }
  }
  if(pt_.x>0){
    if(calculateDelta(png_.getPixel(left.x, left.y), startpix)<tolerance_){
      if(std::find(record.begin(), record.end(), left.x*1000+left.y)==record.end()){
        trav_->add(left);
      }
    }
  }
  if(pt_.y>0){
    if(calculateDelta(png_.getPixel(above.x, above.y), startpix)<tolerance_){
      if(std::find(record.begin(), record.end(), above.x*1000+above.y)==record.end()){
        trav_->add(above);
      }
    }
  }

  while(!trav_->empty()){
    Point temp = trav_->pop();
    if(std::find(record.begin(), record.end(), temp.x*1000+temp.y)==record.end()){
      record.push_back(temp.x*1000+temp.y);
      pt_=temp;
      // std::cout<<"poped "<<temp.x<<","<<temp.y<<std::endl;
      return *this;
    }
  }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return pt_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  return (!trav_->empty());
}
