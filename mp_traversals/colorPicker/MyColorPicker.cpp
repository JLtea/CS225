#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  double h = 100;
  double s = 100;
  double l = .5;
  unsigned f = 10;
  if (((x % f < f/2) && (y % f >= f/2)) || ((y % f <f/2) && (x % f >= f/2))) {
    l = 1;
  }
  return HSLAPixel(h,s,l);
}
