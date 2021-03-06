//
// Created by jakub on 24.04.21.
//


#ifndef TILEEDITOR_ROMFILE_H
#define TILEEDITOR_ROMFILE_H

#include <vector>
#include "RomDataProvider.h"

class RomFile : public RomDataProvider {
public:
    RomFile(std::vector<unsigned char> data);

    unsigned int getValue(unsigned int offset, unsigned int bitSize) override;
    unsigned int getSize() override;

private:
    unsigned int truncateToBitSize(unsigned int value, unsigned int bitSize);
    std::vector<unsigned char> file;
};


#endif //TILEEDITOR_ROMFILE_H
