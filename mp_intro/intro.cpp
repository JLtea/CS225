#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>


void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  cs225::PNG png;
  png.readFromFile(inputFile);
  cs225::PNG * result = new cs225::PNG(png.width(), png.height());
  for(unsigned int x = 0; x < png.width(); x++){
    for(unsigned int y = 0; y < png.height(); y++) {
      cs225::HSLAPixel & pixel = png.getPixel(x,y);
      cs225::HSLAPixel & toCopy = result->getPixel(png.width() - x - 1,png.height() - y - 1);
      toCopy.h = pixel.h;
      toCopy.s = pixel.s;
      toCopy.l = pixel.l;
      toCopy.a = pixel.a;
    }
  }
  result->writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
