//
// Created by jakub on 02.05.21.
//

#ifndef TILEEDITOR_COLOR_H
#define TILEEDITOR_COLOR_H

class Color {
public:
    Color(unsigned char r, unsigned char g, unsigned char b);
    Color(const Color &src);
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

#endif //TILEEDITOR_COLOR_H
