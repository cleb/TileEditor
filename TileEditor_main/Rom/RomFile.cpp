//
// Created by jakub on 24.04.21.
//

#include "RomFile.h"



RomFile::RomFile(std::vector<unsigned char> data){
    file = data;
}

unsigned int RomFile::truncateToBitSize(unsigned int value, unsigned int bitSize) {
    unsigned int mask = (1 << bitSize) - 1;
    return value & mask;
}

unsigned int RomFile::getValue(unsigned int bitOffset, unsigned int bitSize) {
    auto byteOffset = bitOffset / 8;
    auto subBitOffset = bitOffset % 8;

    unsigned int result = file[byteOffset] << subBitOffset;
    auto restBitSize = bitSize - (8 - subBitOffset);
    if(restBitSize > 0) {
        auto rest = file[byteOffset + 1];
        auto addToResult = (rest >> (8 - subBitOffset));
        result |= addToResult;
    }
    return truncateToBitSize(result, bitSize);
}