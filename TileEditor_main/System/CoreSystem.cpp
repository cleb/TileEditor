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

Palette *CoreSystem::getActivePalette() {
    return palettes[0].get();
}

int CoreSystem::getNumTiles() {
    return data->getSize() / 32;
}

CoreSystem::CoreSystem() {
    Palette *defaultPalette = createDefaultPalette();

    palettes.push_back(std::unique_ptr<Palette>(defaultPalette));
}

Palette *CoreSystem::createDefaultPalette() const {
    Palette *defaultPalette = new Palette();

    for(int i = 0; i < 16; i++){
        unsigned char lastBit = (i & 1);
        unsigned char r = ((i & 8) >> 2) | lastBit;
        unsigned char g = ((i & 4) >> 1) | lastBit;
        unsigned char b = ((i & 2)) | lastBit;
        defaultPalette->set(i,Color(r<<6,g<<6,b<<6));
    }
    return defaultPalette;
}
