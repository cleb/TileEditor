//
// Created by jakub on 25.04.21.
//

#ifndef TILEEDITOR_TILE_H
#define TILEEDITOR_TILE_H

#include <vector>

class Tile {
public:
    Tile(unsigned int w, unsigned int h);
    void set(unsigned  int x, unsigned int y, unsigned int value);
    unsigned int get (unsigned  int x, unsigned int y);
private:
    std::vector<unsigned int> data;
    const unsigned int w;
    const unsigned int h;
};


#endif //TILEEDITOR_TILE_H
