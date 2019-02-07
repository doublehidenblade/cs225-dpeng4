/**
 * @file flower.h
 * Declaration of the Flower class.
 */

#pragma once

#include "shape.h"

/**
 * A subclass of Drawable that can draw a flower
 */
class Flower : public Drawable
{
  private:
    Shape * stem;//<<--added ptr, so that Shape * stem = new Rectangle(...);
    Shape * pistil; //<<--added ptr, so that Shape * stem = new Rectangle(...);
    Shape * leaf;//<<--added ptr, so that Shape * stem = new Rectangle(...);
    void clear();//<<--
    void drawPetals(cs225::PNG* canvas, const Vector2& center, int x, int y) const;

  public:
    Flower(const Vector2& center);
    void draw(cs225::PNG* canvas) const;
    ~Flower();//<<--
};
