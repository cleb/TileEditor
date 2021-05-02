//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_CORESYSTEM_H
#define TILEEDITOR_CORESYSTEM_H

#include "../Rom/RomDataProvider.h"
#include "Tile.h"
#include <memory>

class CoreSystem {
public:
    void setData(RomDataProvider *provider);
    Tile getTile(int offset);
    int getNumTiles();


private:
    std::unique_ptr<RomDataProvider> data;
};


#endif //TILEEDITOR_CORESYSTEM_H
