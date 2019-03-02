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
  a = a - 0.000017;
  if(x>w/2 && y>h/2){
    l=0.7;
  }else{
    l=0.5;
  }
  if(x<w/2 && y<h/2){
    l=0.7;
  }
  hue = 300;
  HSLAPixel pixel(hue, a, l);
  return pixel;
}
