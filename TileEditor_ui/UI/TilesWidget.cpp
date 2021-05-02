//
// Created by jakub on 25.04.21.
//

#include <QGridLayout>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include "TilesWidget.h"
#include "TileWidget.h"

TilesWidget::TilesWidget(QWidget *parent, std::shared_ptr<CoreSystem> sys) : QWidget(parent), system(sys), scene(new QGraphicsScene(this)) {
    view = new QGraphicsView(scene);
    layout = new QBoxLayout(QBoxLayout::LeftToRight);
    layout->addWidget(view);
    setLayout(layout);

    offset = 0;

    offsetBox = new QSpinBox(this);
    offsetBox->setValue(0);
    offsetLabel = new QLabel(tr("Offset"));
    offsetSetButton = new QPushButton(tr("Change offset"));
    layout->addWidget(offsetLabel);
    layout->addWidget(offsetBox);
    layout->addWidget(offsetSetButton);

    connect(offsetSetButton, &QPushButton::released, this, &TilesWidget::offsetChanged);
}

void TilesWidget::resetTiles() {
    scene->clear();
    int numTiles = system->getNumTiles();

    for(int i = 0; i < numTiles; i ++){
        Tile tile = system->getTile(i*32 + offset);
        TileWidget *newTileWidget = new TileWidget(tile);
        newTileWidget->setPos(QPoint(i%10 * 9,i/10 * 9));
        scene->addItem(newTileWidget);
    }

    QTransform matrix;
    matrix.scale(4,4);
    view->setTransform(matrix);
}

void TilesWidget::offsetChanged() {
    offset = offsetBox->text().toInt();
    resetTiles();
}
