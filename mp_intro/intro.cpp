#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>


void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  cs225::PNG png, result;
  png.readFromFile(inputFile);
  int centerY = (int) png.height/2;
  for(int x = 0; x <= png.width; x++){
    for(int y = 0; y <= png.height; y++) {
      cs225::HSLAPixel & pixel =  result.getPixel(x,y);
      pixel._copy(png.getPixel(x,height-y));
    }
  }
  png.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
