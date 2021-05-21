//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_CORESYSTEM_H
#define TILEEDITOR_CORESYSTEM_H

#include "../Rom/RomDataProvider.h"
#include "Tile.h"
#include <memory>
#include "Palette.h"

class CoreSystem {
public:
    CoreSystem();
    void setData(RomDataProvider *provider);
    Tile getTile(int offset);
    int getNumTiles();
    Palette *getActivePalette();

private:
    std::unique_ptr<RomDataProvider> data;
    std::vector<std::unique_ptr<Palette>> palettes;

    Palette *createDefaultPalette() const;
};


#endif //TILEEDITOR_CORESYSTEM_H
