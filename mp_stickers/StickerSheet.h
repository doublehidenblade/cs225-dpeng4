/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#include "Image.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include <array>
#pragma once

 class StickerSheet{
 public:

   StickerSheet (const Image &picture, unsigned max);
 	//Initializes this StickerSheet with a base picture and the ability to hold a max number of stickers (Images) with indices 0 through max - 1. More...

 	~StickerSheet ();
 	//Frees all space that was dynamically allocated by this StickerSheet. More...

 	StickerSheet (const StickerSheet &other);
 	//The copy constructor makes this StickerSheet an independent copy of the source. More...

  const StickerSheet & 	operator= (const StickerSheet &other);
 	//The assignment operator for the StickerSheet class. More...

  void changeMaxStickers (unsigned max);
 	//Modifies the maximum number of stickers that can be stored on this StickerSheet without changing existing stickers' indices. More...

  int	addSticker (Image &sticker, unsigned x, unsigned y);
   	//Adds a sticker to the StickerSheet, so that the top-left of the sticker's Image is at (x, y) on the StickerSheet. More...

  bool translate (unsigned index, unsigned x, unsigned y);
   	//Changes the x and y coordinates of the Image in the specified layer. More...

  void removeSticker (unsigned index);
   	//Removes the sticker at the given zero-based layer index. More...

  Image * getSticker (unsigned index);
   	//Returns a pointer to the sticker at the specified index, not a copy of it. More...

  Image	render () const;
   	//Renders the whole StickerSheet on one Image and returns that Image. More...
  private:
    Image *base_;
    int iMAX;
    std::vector <int> x_;
    std::vector <int> y_;
    std::vector <Image> stickers_;
    void _copy(const StickerSheet & other);
    int num_;
 };
