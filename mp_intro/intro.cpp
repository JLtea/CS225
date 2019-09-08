#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>
#include <cmath>
#include <iostream>


void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  cs225::PNG png;
  png.readFromFile(inputFile);
  cs225::PNG* result = new cs225::PNG(png.width(), png.height());
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
  unsigned int centerX = width/2;
  unsigned int centerY = height/2;
  // TODO: Part 3
  for(unsigned int x = 0; x < png.width(); x++){
    for(unsigned int y = 0; y < png.height(); y++) {
      cs225::HSLAPixel & pixel = png.getPixel(x,y);
      double dist = sqrt((x-centerX)*(x-centerX) + (y-centerY)*(y-centerY));
      pixel.h = 270;
      pixel.s = 1;
      pixel.l = 1;
      pixel.l = (0.0015*dist)*pixel.l;
      
    }
  }
  unsigned int x = 0;
  unsigned int y = 0;
  unsigned int t;
  int angle = 7;
  int hue = 180;
  for(; y < png.height(); y+=angle) {
    x += 1;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
    
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 1;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+2,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+2,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 1;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-2).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-2).h == hue){
      break;
    }
  }
  y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 1;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y+3).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y+3).h == hue){
        break;
    }
  }
  angle = 3;
  for(; y < png.height(); y+=angle) {
    x += 1;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
  }
   y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 1;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+2,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+2,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 1;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-2).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-2).h == hue){
      break;
    }
  }
  y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 1;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y+3).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y+3).h == hue){
        break;
    }
  }
  angle = 2;
  for(; y < png.height(); y+=angle) {
    x += 1;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 1;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+2,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+2,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 1;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-2).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-2).h == hue){
      break;
    }
  }
   y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 1;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y+3).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y+3).h == hue){
        break;
    }
  }
  angle = 3;
  for(; y < png.height(); y+=angle) {
    x += 2;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 2;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+2,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+2,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 2;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-2).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-2).h == hue){
      break;
    }
  }
   y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 2;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y+3).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y+3).h == hue){
        break;
    }
  }
  angle = 1;
  for(; y < png.height(); y+=angle) {
    x += 1;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 1;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+2,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+2,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 1;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-2).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-2).h == hue){
      break;
    }
  }
   y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 1;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y+3).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y+3).h == hue){
        break;
    }
  }
  angle = 3;
  for(; y < png.height(); y+=angle) {
    x += 4;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 4;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+1,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+1,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 4;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-1).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-1).h == hue){
      break;
    }
  }
   y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 4;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y+1).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y+1).h == hue){
        break;
    }
  }
    angle = 1;
  for(; y < png.height(); y+=angle) {
    x += 2;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t+1).h == hue){
        break;
      }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 2;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t,y-1).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t,y-1).h == hue){
      break;
    }
  }
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 2;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-1).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-1,t).h = hue;
      }
    }
    if(png.getPixel(x-1,t-1).h == hue){
      break;
    }
  }
   y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 2;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t-1,y).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t-1,y).h == hue){
        break;
    }
  }
   angle = 1;
  for(; y < png.height(); y+=angle) {
    x += 3;
    for(t = y; t<(y+angle) && t<png.height();t+=1){
      if(png.getPixel(x+1,t).h == hue){
        break;
      }
      if(0<t<png.height()){
        png.getPixel(x,t).h = hue;
        if(x < png.width() - 1){
          png.getPixel(x+1,t).h = hue;
        }
      }
    }
    if(png.getPixel(x+1,t).h == hue){
        break;
      }
  }
  y = t;
  for(; x < png.width(); x+=angle) {
    if (y >= 0) {
      y -= 3;
    }
    for(t = x; t<(x+angle) && t<png.width() -3;t+=1){
        if(png.getPixel(t+1,y-2).h == hue){
          break;
        }
        png.getPixel(t,y).h = hue;
        if(y>= 1){
          png.getPixel(t,y-1).h = hue;
        }
    }
    if(png.getPixel(t+1,y-2).h == hue){
      break;
    }
  }
  y--;
  x = t;
  for(; y > 0 && y < png.height(); y-=angle) {
    x -= 3;
    for(t = y; t>(y-angle) && t > 0 ;t--){
      if(png.getPixel(x-1,t-1).h == hue){
        break;
      }
      if(t>0){
        png.getPixel(x,t).h = hue;
        png.getPixel(x-2,t).h = hue;
      }
    }
    if(png.getPixel(x-2,t-1).h == hue){
      break;
    }
  }
  
   y = t;
  for(; x > 0 && x < png.width(); x-=angle) {
    if (y < png.height()) {
      y+= 3;
    }
    for(t = x; t>(x-angle) && t>0;t--){
        if(png.getPixel(t,y+1).h == hue){
        break;
        }
        png.getPixel(t,y).h = hue;
        if(y<png.height()){
          png.getPixel(t,y+1).h = hue;
        }
    }
    if(png.getPixel(t,y+1).h == hue){
        break;
    }
  }
  return png;
}
