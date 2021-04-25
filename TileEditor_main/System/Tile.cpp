//
// Created by jakub on 25.04.21.
//

#include "Tile.h"

Tile::Tile(unsigned int w, unsigned int h):w(w), h(h) {
    data.assign(w*h,0);
}

void Tile::set(unsigned int x, unsigned int y, unsigned int value) {
    data[y * w + x] = value;
}

unsigned int Tile::get(unsigned int x, unsigned int y) {
    return data[y * w + x];
}