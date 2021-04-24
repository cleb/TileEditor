//
// Created by jakub on 24.04.21.
//

#include "RomFile.h"



RomFile::RomFile(std::vector<unsigned char> data){
    file = data;
}

unsigned int RomFile::getValue(unsigned int offset, unsigned int bitSize) {
    return 1;
}