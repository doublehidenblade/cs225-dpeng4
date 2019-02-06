#include "Image.h"
#include "StickerSheet.h"
#include <iostream>
int main() {
  Image alma;
  alma.readFromFile("tests/alma.png");
  Image liberty;
  liberty.readFromFile("liberty.png");
  liberty.scale(1.2);
  liberty.darken(0.4);
  Image christ;
  christ.readFromFile("christ.png");
  christ.scale(0.8);
  christ.rotateColor(0);
  christ.lighten(0.2);
  Image cross;
  cross.readFromFile("cross.png");
  //cross.scale(0.5);
  cross.scale(300,200);
  cross.darken(0.4);

  StickerSheet sheet(alma, 10);

  sheet.addSticker(cross, alma.width()-cross.width(), alma.height()-cross.height());
  sheet.addSticker(liberty, 20, alma.height()-liberty.height());
  sheet.addSticker(christ, 250, alma.height()-christ.height());

  Image final = sheet.render();
  final.grayscale();
  final.rotateColor(0);
  final.writeToFile("myImage.png");
  std::cout << "done" << std::endl;
  return 0;
}
