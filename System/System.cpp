//
// Created by jakub on 24.04.21.
//

#include "System.h"

void System::setData(std::shared_ptr<RomDataProvider> provider) {
    data = provider;
}