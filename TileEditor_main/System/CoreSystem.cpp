//
// Created by jakub on 24.04.21.
//

#include "CoreSystem.h"

void CoreSystem::setData(RomDataProvider *provider) {
    data.reset(provider);
}

Tile CoreSystem::getTile(int offset) {
    Tile tile(8,8);
    for(int y = 0; y < 8; y++){
        for(int x = 0; x < 8; x++) {
            unsigned int fileOffset = (y * 8 + x) * 4 + offset * 8;
            tile.set(x,y,data->getValue(fileOffset,4));
        }
    }
    return tile;
}