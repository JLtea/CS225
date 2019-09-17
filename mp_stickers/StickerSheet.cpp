#include "StickerSheet.h"




StickerSheet::StickerSheet(const Image & picture, unsigned max) {
    base = picture;
    maxStickers=max;
    stickers = new Image[max];
    next = 0;
    coordX = new int[max];
    coordY = new int[max];
}

StickerSheet::~StickerSheet(){

    delete[] stickers;
    delete[] coordX;
    delete[] coordY;
}

StickerSheet::StickerSheet(const StickerSheet & other){
    this->base = other.base;
    this->maxStickers = other.maxStickers;
    this->stickers = other.stickers;
    this->coordX = other.coordX;
    this->coordY = other.coordY;
    this->next = other.next;
}
const StickerSheet & StickerSheet::operator= (const StickerSheet & other) {
    this->base = other.base;
    this->maxStickers = other.maxStickers;
    this->stickers = other.stickers;
    this->coordX = other.coordX;
    this->coordY = other.coordY;
    this->next = other.next;
    return *this;
}

int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y) {
    // int ind;
    // bool added = false;
    // if (stickers[0] == NULL) {
    //     stickers[0] = sticker;
    //     coordX[0] = x;
    //     coordY[0] = y;
    //     added = true;
    // } else {
    //     while(stickers[ind] != NULL && ind < (maxStickers - 1)){
    //         ind++;
    //         if (stickers[ind] == NULL){
    //             stickers[ind] = sticker;
    //             coordX[ind] = x;
    //             coordY[ind] = y;
    //             added = true;
    //         }

    //     }
    // }
    // if(!added) {
    //     ind = -1;
    // }
    // return ind;
    if (next < maxStickers) {
        stickers[next] = sticker;
        coordX[next] = x;
        coordY[next] = y;
        next++;
    } else {
        return -1;
    }
    
    return next;
}

void StickerSheet::changeMaxStickers(unsigned max) {
    Image* changed = new Image[max];
    int upto;
    next = 0;
    if ((int)max > maxStickers){
        upto = maxStickers;
    } else {
        upto = max;
    }
    for (int i = 0; i < upto; i++) {
        changed[i] = stickers[i];
        next++;
    }
    delete[] stickers;
    stickers = changed;
}

Image* StickerSheet::getSticker(unsigned index) {
    if (maxStickers < (int)index || (int)index < 0) {
        return NULL;
    } else {
        return &stickers[index];
    }
}

void StickerSheet::removeSticker(unsigned index) {
    if (0<index<maxStickers) {
        stickers[index]= nothing;
        next--;
        for (int i = index + 1; i < maxStickers; i++) {
            stickers[index-1] = stickers[index];
        }
    }
    
}

Image StickerSheet::render() const {
    Image* rendered = new Image;
    *rendered = base;

    for(int h = 0; h < maxStickers; h++) {
        Image current = stickers[h];
        for(unsigned i = 0; i < stickers[h].width(); i++){
            for(unsigned j = 0; j < stickers[h].height(); j++){
                rendered->getPixel(coordX[h] + i, coordY[h] + j) = current.getPixel(i,j);
            }
        }
    }
    return *rendered;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    if ((int)index > next) {
        return false;
    }
    coordX[index] = x;
    coordY[index] = y;
    return true;
}
