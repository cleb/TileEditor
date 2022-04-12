//
// Created by jakub on 27.04.21.
//

#ifndef TILEEDITOR_TILEWIDGET_H
#define TILEEDITOR_TILEWIDGET_H

#include <QGraphicsPixmapItem>
#include <memory>
#include "../../TileEditor_main/System/Tile.h"
#include "../../TileEditor_main/System/Palette.h"
#include "../../TileEditor_main/System/CoreSystem.h"

class TileWidget : public QObject, public QGraphicsPixmapItem {
Q_OBJECT
public:
    TileWidget(unsigned int offset, Palette *palette, std::shared_ptr<CoreSystem> sys);
public slots:
    void onClick();
signals:
    void tileClicked(unsigned int offset);

private:
    Tile tile;
    QPixmap *pixmap;
    unsigned int tileOffset;
};


#endif //TILEEDITOR_TILEWIDGET_H
