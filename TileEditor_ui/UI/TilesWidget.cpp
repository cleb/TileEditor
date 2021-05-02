//
// Created by jakub on 25.04.21.
//

#include <QPainter>
#include <QGridLayout>
#include <QScrollArea>
#include <QWidget>
#include "TilesWidget.h"
#include "TileWidget.h"

TilesWidget::TilesWidget(QWidget *parent, std::shared_ptr<CoreSystem> sys) : QWidget(parent), system(sys) {
    QScrollArea *scrollArea = new QScrollArea(this);
    viewport = new QWidget(this);
    viewport->setGeometry(0,0,320,4000);
    layout = new QGridLayout(viewport);
    viewport->setLayout(layout);
    scrollArea->setWidget(viewport);
}

void TilesWidget::resetTiles() {
    int numTiles = system->getNumTiles();
    viewport->setGeometry(0,0,400, (numTiles * 32) / 10);

    for(int i = 0; i < numTiles; i ++){
        Tile tile = system->getTile(i*32);
        TileWidget *newTileWidget = new TileWidget(this,tile);
        layout->addWidget(newTileWidget,i/10,i%10);
    }

}
