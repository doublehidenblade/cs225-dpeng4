#pragma once

#include "ColorPicker.h"
#include "../cs225/HSLAPixel.h"
#include "../Point.h"

using namespace cs225;

/**
 * A color picker class using your own color picking algorithm
 */
class MyColorPicker : public ColorPicker {
public:
  MyColorPicker();
  MyColorPicker(unsigned w, unsigned h);
  HSLAPixel getColor(unsigned x, unsigned y);

private:
  int hue;
  double a;
  unsigned w;
  unsigned h;
};
