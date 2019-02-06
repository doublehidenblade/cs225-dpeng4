#include "Image.h"
#include "cs225/PNG.h"
using namespace cs225;

Image::Image(){
  return;
}
void Image::lighten (){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.l = (p.l + 0.1);
      if(p.l > 1){
        p.l = 1;
      }
    }
  }
}
  //Lighten an Image by increasing the luminance of every pixel by 0.1.
void 	Image::lighten (double amount){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.l = (p.l + amount);
      if(p.l > 1){
        p.l = 1;
      }
    }
  }
}
  //Lighten an Image by increasing the luminance of every pixel by amount.
void 	Image::darken (){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.l = (p.l - 0.1);
      if(p.l < 0){
        p.l = 0;
      }
    }
  }
}
  //Darken an Image by decreasing the luminance of every pixel by 0.1.
void 	Image::darken (double amount){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.l = (p.l - amount);
      if(p.l < 0){
        p.l = 0;
      }
    }
  }
}
  //Darkens an Image by decreasing the luminance of every pixel by amount.
void 	Image::saturate (){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.s = (p.s + 0.1);
      if(p.s > 1){
        p.s = 1;
      }
    }
  }
}
  //Saturates an Image by increasing the saturation of every pixel by 0.1.
void 	Image::saturate (double amount){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.s = (p.s + amount);
      if(p.s > 1){
        p.s = 1;
      }
    }
  }
}
  //Saturates an Image by increasing the saturation of every pixel by amount.
void 	Image::desaturate (){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.s = (p.s - 0.1);
      if(p.s < 0){
        p.s = 0;
      }
    }
  }
}
  //Desaturates an Image by decreasing the saturation of every pixel by 0.1.
void 	Image::desaturate (double amount){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.s = (p.s - amount);
      if(p.s < 0){
        p.s = 0;
      }
    }
  }
}
  //Desaturates an Image by decreasing the saturation of every pixel by amount.
void 	Image::grayscale (){
  for (unsigned x = 0; x < this->width()-1; x++){
    for (unsigned y = 0; y < this->height()-1; y++){
      HSLAPixel & p = this->getPixel(x, y);
      p.h = 0;
    }
  }
}
  //Turns the image grayscale.
void 	Image::rotateColor (double degrees){
  for (unsigned x = 0; x < this->width(); x++){
    for (unsigned y = 0; y < this->height(); y++){
      HSLAPixel & pixel = this->getPixel(x,y);
      pixel.h = int(pixel.h + degrees) % 360;
      if(pixel.h > 360){
        pixel.h = pixel.h - 360;
      }
      if(pixel.h < 0){
        pixel.h = pixel.h + 360;
      }
    }
  }
}
  //Rotates the color wheel by degrees.
void 	Image::illinify (){
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      if (pixel.h <= (216 - 11)/2 + 11){
        pixel.h = 11;
      }
      else if (pixel.h >= (360 - 216 + 11)/2 + 216){
        pixel.h = 11;
      }
      else{
        pixel.h = 216;
      }
    }
  }
}
  //Illinify the image.
void Image::scale (double factor){
  int new_w = int(this->width() * factor);
  int new_h = int(this->height() * factor);
  PNG *original = new PNG(this->width(), this->height());
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      original->getPixel(x,y) = this->getPixel(x, y);
    }
  }//copy original pixels
  this->resize(new_w, new_h);
  for (int x = 0; x < new_w; x++) {
    for (int y = 0; y < new_h; y++) {
      this->getPixel(x,y) = original->getPixel(x/factor, y/factor);
    }
  }
}


  //Scale the Image by a given factor.
void Image::scale (unsigned w, unsigned h){
  PNG *original = new PNG(this->width(), this->height());
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      original->getPixel(x,y) = this->getPixel(x, y);
    }
  }//copy original pixels

  this->resize(w, h);
  double wratio = w/(this->width());
  double hratio = h/(this->height());
  for (unsigned x = 0; x < w; x++) {
    for (unsigned y = 0; y < h; y++) {
      this->getPixel(x,y) = original->getPixel(int(x/wratio), int(y/hratio));//<<--fixed
    }
  }
}
  //Scales the image to fit within the size (w x h).
