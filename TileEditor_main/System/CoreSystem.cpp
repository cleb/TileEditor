//
// Created by jakub on 24.04.21.
//

#include "CoreSystem.h"

void CoreSystem::setData(std::shared_ptr<RomDataProvider> provider) {
    data = provider;
}