//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_ROMDATAPROVIDER_H
#define TILEEDITOR_ROMDATAPROVIDER_H

class RomDataProvider {
    virtual unsigned int getValue(unsigned int offset, unsigned int bitSize) = 0;
};

#endif //TILEEDITOR_ROMDATAPROVIDER_H
