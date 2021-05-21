//
// Created by jakub on 27.04.21.
//

#ifndef TILEEDITOR_TILEWIDGET_H
#define TILEEDITOR_TILEWIDGET_H

#include <QGraphicsPixmapItem>
#include <memory>
#include "../../TileEditor_main/System/Tile.h"
#include "../../TileEditor_main/System/Palette.h"

class TileWidget : public QGraphicsPixmapItem {
public:
    TileWidget(Tile tile, Palette *palette);
private:
    Tile tile;
    QPixmap *pixmap;
};


#endif //TILEEDITOR_TILEWIDGET_H
