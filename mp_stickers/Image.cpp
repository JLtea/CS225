#include "Image.h"
#include "cs225/HSLAPixel.h"
#include "cs225/PNG.h"
#include <iostream>



// Lighten an Image by increasing the luminance of every pixel by 0.1.
// This function ensures that the luminance remains in the range [0, 1].    
void Image::lighten(){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if(pixel.l <=0.9){
                pixel.l += 0.1;
            } else {
                pixel.l = 1;
            }
            
        }
    }
}
// Lighten an Image by increasing the luminance of every pixel by amount.
// This function ensures that the luminance remains in the range [0, 1].
void Image::lighten(double amount){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if((pixel.l + amount) <=1.0){
                pixel.l += amount;
            } else {
                pixel.l = 1;
            }
        }
    }
}

// Darken an Image by decreasing the luminance of every pixel by 0.1.
// This function ensures that the luminance remains in the range [0, 1]
void Image::darken(){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if(pixel.l > 0.1){
                pixel.l -= 0.1;
            } else {
                pixel.l = 0;
            }
            
        }
    }
}
// Darkens an Image by decreasing the luminance of every pixel by amount.
// This function ensures that the luminance remains in the range [0, 1]
void Image::darken(double amount){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if((pixel.l - amount) > 0){
                pixel.l -= amount;
            } else {
                pixel.l = 0;
            }
        }
    }
}
// Saturates an Image by increasing the saturation of every pixel by 0.1.
// This function ensures that the saturation remains in the range [0, 1].
void Image::saturate(){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if(pixel.s <=0.9){
                pixel.s += 0.1;
            } else {
                pixel.s = 1;
            }
        }
    }
}
// Saturates an Image by increasing the saturation of every pixel by amount.
// This function ensures that the saturation remains in the range [0, 1].
void Image::saturate(double amount){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if((pixel.s + amount) <=1.0){
                pixel.s += amount;
            } else {
                pixel.s = 1;
            }
        }
    }
}
// Desaturates an Image by decreasing the saturation of every pixel by 0.1.
// This function ensures that the saturation remains in the range [0, 1].
void Image::desaturate(){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if(pixel.s > 0.1){
                pixel.s -= 0.1;
            } else {
                pixel.s = 0;
            }
            
        }
    }
}
// Desaturates an Image by decreasing the saturation of every pixel by amount.
// This function ensures that the saturation remains in the range [0, 1].
void Image::desaturate(double amount){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if((pixel.s - amount) > 0){
                pixel.s -= amount;
            } else {
                pixel.s = 0;
            }
        }
    }
}
//Turns the image grayscale.
void Image::grayscale(){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            pixel.s = 0;
        }
    }
}
// Rotates the color wheel by degrees.
// Rotating in a positive direction increases the degree of the hue. This function ensures that the hue remains in the range [0, 360].
void Image::rotateColor (double degrees){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            pixel.h += degrees;
            if (pixel.h + degrees > 360){
                pixel.h -= 360;
            } else if(pixel.h + degrees < 0) {
                pixel.h += 360;
            }
        }
    }
}
//Illinify the image.
void Image::illinify(){
    for (unsigned int x = 0; x<this->width();x++){
        for(unsigned int y = 0; y<this->height(); y++){
            cs225::HSLAPixel & pixel = this->getPixel(x,y);
            if (pixel.h <= 113 || pixel.h >= 294) {
                pixel.h = 11;
            } else {
                pixel.h = 216;
            }
        }
    }
}
// Scale the Image by a given factor.

// For example:

// A factor of 1.0 does not change the image.
// A factor of 0.5 results in an image with half the width and half the height.
// A factor of 2 results in an image with twice the width and twice the height.
// This function both resizes the Image and scales the contents.
void Image::scale(double factor){
    cs225::PNG scaled(this->width()*factor, this->height()*factor);
        for (unsigned x = 0; x<this->width()*factor;x++) {
            for (unsigned y = 0; y<this->height()*factor; y++) {
                scaled.getPixel(x,y) = this->getPixel(x/factor, y/factor);                
            }
        }

    this->resize(this->width()*factor,this->height()*factor);
        for (unsigned x = 0; x<this->width();x++) {
            for (unsigned y = 0; y<this->height(); y++) {
                this->getPixel(x,y) = scaled.getPixel(x,y);
            }
        }
    
}


// Scales the image to fit within the size (w x h).

// This function preserves the aspect ratio of the image, so the result will always be an image of width w or of height h (not necessarily both).

// For example, if the Image is currently (10, 20) and we want to scale to (100, 100), then this->should scale the Image to (50, 100). Note that scaling the image to (100, 200) does not fit within the (100,100) dimensions given and is therefore incorrect.

// This function both resizes the Image and scales the contents.
void Image::scale(unsigned w, unsigned h){
    if (this->width() == 0 || this->height == 0) {
        this->resize(w,h);
    } else {
        ratio1 = w/this->width();
        ratio2 = l/this->height();
        if (ratio1>ratio2) {
            this->scale(ratio2);
        } else {
            this->scale(ratio1)
        }
    }
}