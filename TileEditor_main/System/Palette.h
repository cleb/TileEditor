//
// Created by jakub on 02.05.21.
//

#ifndef TILEEDITOR_PALETTE_H
#define TILEEDITOR_PALETTE_H

#include <map>
#include "Color.h"

class Palette {
public:
    Color get(int value);
    void set(int value, Color color);
private:
    std::map<int,Color> colors;
};


#endif //TILEEDITOR_PALETTE_H
