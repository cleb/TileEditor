//
// Created by jakub on 25.04.21.
//

#ifndef TILEEDITOR_TILESWIDGET_H
#define TILEEDITOR_TILESWIDGET_H
#include <QWidget>
#include <QGridLayout>
#include <QGraphicsView>
#include <memory>
#include <vector>
#include "../../TileEditor_main/System/Tile.h"
#include "../../TileEditor_main/System/CoreSystem.h"


class TilesWidget : public QWidget {
public:
    TilesWidget(QWidget *parent, std::shared_ptr<CoreSystem> system);
    void resetTiles();
private:

    std::shared_ptr<CoreSystem> system;

    QGraphicsView *view;
    QGraphicsScene *scene;
    QBoxLayout *layout;
    QWidget *viewport;
};


#endif //TILEEDITOR_TILESWIDGET_H
