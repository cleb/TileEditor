//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_ROMDATAPROVIDER_H
#define TILEEDITOR_ROMDATAPROVIDER_H

class RomDataProvider {
public:
    virtual unsigned int getValue(unsigned int offset, unsigned int bitSize) = 0;
    unsigned virtual int getSize() = 0;
};

#endif //TILEEDITOR_ROMDATAPROVIDER_H
