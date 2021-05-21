//
// Created by jakub on 02.05.21.
//

#include "Color.h"

Color::Color(unsigned char red, unsigned char green, unsigned char blue) : r(red), g(green), b(blue) {}

Color::Color(const Color &src) : Color(src.r, src.g, src.b) {}