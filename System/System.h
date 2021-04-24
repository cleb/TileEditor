//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_SYSTEM_H
#define TILEEDITOR_SYSTEM_H

#include "../Rom/RomDataProvider.h"
#include <memory>

class System {
    void setData(std::shared_ptr<RomDataProvider> provider);
private:
    std::shared_ptr<RomDataProvider> data;
};


#endif //TILEEDITOR_SYSTEM_H
