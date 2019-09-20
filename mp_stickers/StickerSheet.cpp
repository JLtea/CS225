#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image & picture, unsigned max) {
    base = picture;
    maxStickers = max;
    stickers = new Image*[max];
    coordX = new int[max];
    coordY = new int[max];
    count = 0;
}

StickerSheet::~StickerSheet() {
    delete[] stickers;
    delete[] coordX;
    delete[] coordY;
}

StickerSheet::StickerSheet(const StickerSheet & other) {
    this->base = other.base;
    this->maxStickers = other.maxStickers;
    this->stickers = new Image*[maxStickers];
    this->coordX = new int[maxStickers];
    this->coordY = new int[maxStickers];
    for (int i = 0; i < other.count; i++) {
        this->addSticker(*other.stickers[i],other.coordX[i],other.coordY[i]);
    }
}
const StickerSheet & StickerSheet::operator= (const StickerSheet & other) {
    this->base = other.base;
    this->maxStickers = other.maxStickers;
    for(int i = 0; i < count; i++){
        removeSticker(i);
    }
    delete[] stickers;
    delete[] coordX;
    delete[] coordY;
    this->stickers = new Image*[maxStickers];
    this->coordX = new int[maxStickers];
    this->coordY = new int[maxStickers];
    for (int i = 0; i < other.count; i++) {
        this->addSticker(*other.stickers[i],other.coordX[i],other.coordY[i]);
    }
    return *this;
}

int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y) {
    int ind = 0;
    bool added = false;
    // if ((x + sticker.width()) > base.width()) {
    //     base.scale((double)(x + sticker.width())/((double)base.width()));
    // }
    // if((y + sticker.height()) > base.height()){
    //     base.scale((double)(y + sticker.height())/((double)base.height()));
    // }
    Image* toAdd = new Image;
    *toAdd = sticker;

    if (count < maxStickers) {
        stickers[count] = toAdd;
        coordX[count] = x;
        coordY[count] = y;
        added = true;
        ind = count;
        count++;
    }
    // if (stickers[0] == NULL) {
    //     stickers[0] = toAdd;
    //     //*stickers[0] = sticker;
    //     coordX[0] = x;
    //     coordY[0] = y;
    //     added = true;
    //     count++;
    // } else {
    //     while(stickers[ind] != NULL && ind < (maxStickers - 1)&& added == false){
    //         ind++;
    //         if (stickers[ind] == NULL){
    //             stickers[ind] = toAdd;
    //             //*stickers[ind] = sticker;
    //             coordX[ind] = x;
    //             coordY[ind] = y;
    //             added = true;
    //             count++;
    //         }

    //     }
    // }
    if (!added) {
        ind = -1;
    }
    return ind; 
}

void StickerSheet::changeMaxStickers(unsigned max) {
    Image* changed = new Image[max];
    if ((int)max > maxStickers) {
        for (int i = 0; i < count; i++) {
            changed[i] = *stickers[i];
        }
    } else {
        for (int i = 0; i < count; i++) {
            if (i < (int)max) {
                changed[i] = *stickers[i];
            } else {
               removeSticker(i);
            }
        }
    }
    delete[] stickers;
    stickers =  new Image*[max];
    for(int i = 0; i < count; i++){
        Image* c = new Image;
        *c = changed[i];
        stickers[i] = c;
    }
    delete[] changed;
    maxStickers = max;
}

Image* StickerSheet::getSticker(unsigned index) {
    if ((int)index >= count || (int)index < 0) {
        return NULL;
    } else {
        return stickers[index];
    }
}

void StickerSheet::removeSticker(unsigned index) {
    if (0<=index<=count) {
        delete stickers[index];
        if (0<(int)index < (count-1)) {
            for (int i = index; i < (count - 1); i++) {
                Image* s = new Image;
                stickers[i] = s;
                *stickers[i] = *stickers[i + 1];
                coordX[i] = coordX[i + 1];
                coordY[i] = coordY[i + 1];
            }
        }
        count--;
    }
    
}

Image StickerSheet::render() const {
    Image rendered = base;
    int maxX = rendered.width();
    int maxY = rendered.height();
    for(int i = 0; i < count; i++){
        int w = stickers[i]->width() + coordX[i];
        int h = stickers[i]->height() + coordY[i];
        if (w > (int)rendered.width() && w > maxX){
            maxX = w;
        }
        if (h > (int)rendered.height() && h > maxY){
            maxY = h;
        }
    }
    rendered.resize(maxX, maxY);

    
    for(int h = 0; h < count; h++) {
        if (stickers[h] != NULL){
            for(unsigned i = 0; i < stickers[h]->width(); i++){
                for(unsigned j = 0; j < stickers[h]->height(); j++){
                    if (stickers[h]->getPixel(i,j).a != 0){
                        rendered.getPixel(coordX[h] + i, coordY[h] + j) = stickers[h]->getPixel(i,j);
                    }
                }
            }
        }
    }
    return rendered;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    if(this->getSticker(index)==NULL){
        return false;
    } else {
        this->coordX[index] = x;
        this->coordY[index] = y;
        return true;
    }
}
