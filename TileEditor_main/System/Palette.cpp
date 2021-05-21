//
// Created by jakub on 02.05.21.
//

#include "Palette.h"

void Palette::set(int value, Color color) {
    if(colors.contains(value)){
        colors.erase(value);
    }
    colors.insert({value,color});
}

Color Palette::get(int value) {
    return colors.at(value);
}