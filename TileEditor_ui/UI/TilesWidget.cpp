//
// Created by jakub on 25.04.21.
//

#include <QGridLayout>
#include <QWidget>
#include  <QGraphicsScene>
#include <QGraphicsView>
#include "TilesWidget.h"
#include "TileWidget.h"

TilesWidget::TilesWidget(QWidget *parent, std::shared_ptr<CoreSystem> sys) : QWidget(parent), system(sys), scene(new QGraphicsScene(this)) {
}

void TilesWidget::resetTiles() {
    int numTiles = system->getNumTiles();

    for(int i = 0; i < numTiles; i ++){
        Tile tile = system->getTile(i*32);
        TileWidget *newTileWidget = new TileWidget(tile);
        newTileWidget->setPos(QPoint(i%10 * 8,i/10 * 8));
        scene->addItem(newTileWidget);
    }
    view = new QGraphicsView(scene);
    QTransform matrix;
    matrix.scale(4,4);
    view->setTransform(matrix);
    layout = new QBoxLayout(QBoxLayout::LeftToRight);
    layout->addWidget(view);
    setLayout(layout);
}
