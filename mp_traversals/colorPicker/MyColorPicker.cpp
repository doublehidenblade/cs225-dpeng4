#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */

MyColorPicker::MyColorPicker(){ }
MyColorPicker::MyColorPicker(unsigned w,unsigned h): w(w),h(h){
  a = 1;
}
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  double l;
  h = h+1-1;
  a = a - 0.000017;
  if(x>w/2){
    l=0.7+y/1000;
  }else{
    l=0.8-y/1000;
  }
  hue = 300-x/3;
  HSLAPixel pixel(hue, 1, a, l);
  return pixel;
}
