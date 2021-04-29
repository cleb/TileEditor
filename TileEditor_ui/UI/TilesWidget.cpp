//
// Created by jakub on 25.04.21.
//

#include <QPainter>
#include <QGridLayout>
#include "TilesWidget.h"
#include "TileWidget.h"

TilesWidget::TilesWidget(QWidget *parent, std::shared_ptr<CoreSystem> sys) : QWidget(parent), system(sys) {
    layout = new QGridLayout(this);
    setLayout(layout);
}

void TilesWidget::resetTiles() {
    for(int y = 0; y < 50; y++){
        for(int x = 0; x < 10; x ++){
            Tile tile = system->getTile((y * 50 + x)*32);
            TileWidget *newTileWidget = new TileWidget(this,tile);
            layout->addWidget(newTileWidget,y,x);
        }
    }
}
