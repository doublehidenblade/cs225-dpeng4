#include "Image.h"
#include "StickerSheet.h"
#include <iostream>
int main() {
  Image alma;
  alma.readFromFile("tests/alma.png");
  Image i;
  i.readFromFile("tests/i.png");

  StickerSheet sheet(alma, 10);
  for (size_t idx = 0; idx < 10; idx++) {
    sheet.addSticker(i, idx*idx*idx, 200-idx*idx);
  }



  Image final = sheet.render();
  final.writeToFile("myImage.png");
  std::cout << "done" << std::endl;
  return 0;
}
