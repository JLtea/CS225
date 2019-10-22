#include <cmath>
#include <iterator>
#include <iostream>
#include <map>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  traversal = NULL;
}

ImageTraversal::Iterator::Iterator(ImageTraversal* traversal, Point &current) {
  /** @todo [Part 1] */
  this->current = current;
  this->traversal = traversal;
  track.insert(current);
}
bool ImageTraversal::Iterator::visited(Point visit){
  // for (int i = 0; i < (int)track.size(); i++) {
  //   if (track.at(i) == visit) {
  //     return true;
  //   }
  // }
  // return false;
  if (track.find(visit) == track.end())
  return false;
  
  return true;
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
    HSLAPixel & start = traversal->image.getPixel(traversal->start.x,traversal->start.y);
    //right side
    if (current.x+1 < traversal->image.width()){
      HSLAPixel & visit = traversal->image.getPixel(current.x+1,current.y);
      if (calculateDelta(start,visit)<traversal->tolerance) {
        Point toAdd = Point(current.x+1,current.y);
          if (!visited(toAdd)) {
            traversal->add(toAdd);
          } 
      }  
    } 

    //below
    if (current.y+1 < traversal->image.height()){
      HSLAPixel & visit = traversal->image.getPixel(current.x,current.y+1);
      if (calculateDelta(start,visit)<traversal->tolerance) {
        Point toAdd = Point(current.x,current.y+1);
          if (!visited(toAdd)) {
            traversal->add(toAdd);
          } 
      } 
    }

    //left side
    if ((int)current.x-1 >= 0){
      HSLAPixel & visit = traversal->image.getPixel(current.x-1,current.y);
      if (calculateDelta(start,visit)<traversal->tolerance) {
        Point toAdd = Point(current.x-1,current.y);
          if (!visited(toAdd)) {
            traversal->add(toAdd);
          } 
      } 
    }

    //above
    if ((int)current.y-1 >= 0) {
      HSLAPixel & visit = traversal->image.getPixel(current.x,current.y-1);
      if (calculateDelta(start,visit)<traversal->tolerance) {
        Point toAdd = Point(current.x,current.y-1);
          if (!visited(toAdd)) {
            traversal->add(toAdd);
          }
      }
    }

    while(true) {
      if (!traversal->empty() && visited(traversal->peek())) {
        traversal->pop();
      } else {
        break;
      }
    }
    // while(visited(traversal->peek())) {
    //   traversal->pop();
    //   if (traversal->empty())
    //   break;
    // }
    if (!traversal->empty()){
      current = traversal->pop();
      track.insert(current);
    } else {
      current = Point(-1,-1);
    }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
    return current;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  if (other.current == this->current && other.traversal == this->traversal) {
    return false;
  }
  return true;
}

