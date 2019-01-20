#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>

using cs225::HSLAPixel;
void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  cs225::PNG png, result;

  png.readFromFile(inputFile);
  result = cs225::PNG(png.width(), png.height());  //create a new PNG object called result

  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0; y < png.height(); y++) {
      HSLAPixel & inpixel = png.getPixel(x, y); //get pixel pointer from input
      HSLAPixel & outpixel = result.getPixel(png.width() - x - 1, png.height() - y - 1); //get opposite pixel pointer from output
      outpixel.l = inpixel.l; //assign values
      outpixel.s = inpixel.s;
      outpixel.a = inpixel.a;
      outpixel.h = inpixel.h;
    }
  }
  result.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
// TODO: Part 3
  cs225::PNG png(width, height);
  float lum = 0.5;
  float sat = 1;
  float alp = 1;
  float hue = 100;
  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0; y < png.height(); y++) {
      HSLAPixel & outpixel = png.getPixel(x, y); //get pixel pointer from output

      outpixel.l = lum; //assign values
      outpixel.s = sat;
      outpixel.a = alp;
      outpixel.h = hue;

      hue = (x + y) / 5;  //paint rainbow
    }
  }
  return png;
}
