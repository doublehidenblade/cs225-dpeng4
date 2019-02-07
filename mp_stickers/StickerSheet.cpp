#include "StickerSheet.h"
#include "Image.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include <array>
void StickerSheet::_copy(const StickerSheet & other){
  base_ = new Image(*other.base_);
  stickers_ = other.stickers_;
  x_ = other.x_;
  y_ = other.y_;
  iMAX = other.iMAX;
  num_ = other.num_;
}

StickerSheet::StickerSheet (const Image &picture, unsigned max){
  base_ = new Image(picture);
  iMAX = max;
  num_ = 0;
  //std::cout << __LINE__ << std::endl;
}
//Initializes this StickerSheet with a base picture and the ability to hold a max number of stickers (Images) with indices 0 through max - 1. More...
StickerSheet::~StickerSheet(){
  //std::cout << __LINE__ << std::endl;
  delete base_;
}
//Frees all space that was dynamically allocated by this StickerSheet. More...
StickerSheet::StickerSheet(const StickerSheet &other){

  //base_ = NULL; //<<<it seems i dont need this to pass all tests
  _copy(other);
}
//The copy constructor makes this StickerSheet an independent copy of the source. More...
const StickerSheet & StickerSheet::operator= (const StickerSheet &other){
  delete base_;
  _copy(other);
  return *this;
}

//The assignment operator for the StickerSheet class. More...
void StickerSheet::changeMaxStickers (unsigned max){
  if(num_ > int(max)){
    num_ = int(max);
  }
}
//Modifies the maximum number of stickers that can be stored on this StickerSheet without changing existing stickers' indices. More...

int	StickerSheet::addSticker (Image &sticker, unsigned x, unsigned y){
  //std::cout << __LINE__ << std::endl;
  num_ ++;
  stickers_.push_back(sticker);
  x_.push_back(x);
  y_.push_back(y);
  return 1;
}
 //Adds a sticker to the StickerSheet, so that the top-left of the sticker's Image is at (x, y) on the StickerSheet. More...

bool StickerSheet::translate (unsigned index, unsigned x, unsigned y){
  unsigned int unsigned_num_ = num_;
  if(index + 1 > unsigned_num_){
    return false;
  }
  x_[index] = x;
  y_[index] = y;
  return true;
}
 //Changes the x and y coordinates of the Image in the specified layer. More...
void StickerSheet::removeSticker (unsigned index){
  num_ --;
  stickers_.erase(stickers_.begin()+index);
  x_.erase(x_.begin()+ index);
  y_.erase(y_.begin()+ index);
  //std::cout << "sticker_ vector has" << (*stickers_).size() << std::endl;
}
 //Removes the sticker at the given zero-based layer index. More...
Image * StickerSheet::getSticker (unsigned index){
  unsigned int unsigned_num_ = num_;
  if(index + 1 > unsigned_num_){
    return NULL;
  }
  return &stickers_[index];
}
 //Returns a pointer to the sticker at the specified index, not a copy of it. More...

Image	StickerSheet::render () const{
  //std::cout << num_ << std::endl;
  for (int idx = 0; idx < num_; idx ++){//////<<<<<------change this

    for (int i = x_[idx]; i < int(stickers_[idx].width() + x_[idx]); i++) {
      for (int j = y_[idx]; j < int(stickers_[idx].height() +y_[idx]); j++) {
        if((stickers_[idx].getPixel(i-x_[idx],j-y_[idx])).h != 0){

          base_->getPixel(i,j) = stickers_[idx].getPixel(i-x_[idx],j-y_[idx]);
        }
      }
    }
  }
  //std::cout << __LINE__ << std::endl;

  return *base_;
}
 //Renders the whole StickerSheet on one Image and returns that Image. More...
