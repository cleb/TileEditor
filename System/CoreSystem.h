//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_CORESYSTEM_H
#define TILEEDITOR_CORESYSTEM_H

#include "../Rom/RomDataProvider.h"
#include <memory>

class CoreSystem {
public:
    void setData(std::shared_ptr<RomDataProvider> provider);
private:
    std::shared_ptr<RomDataProvider> data;
};


#endif //TILEEDITOR_CORESYSTEM_H
