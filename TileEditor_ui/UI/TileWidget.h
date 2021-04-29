//
// Created by jakub on 27.04.21.
//

#ifndef TILEEDITOR_TILEWIDGET_H
#define TILEEDITOR_TILEWIDGET_H

#include <QWidget>
#include <memory>
#include "../../TileEditor_main/System/Tile.h"

class TileWidget : public QWidget {
public:
    TileWidget(QWidget *parent, Tile tile);
private:
    Tile tile;
    void paintEvent(QPaintEvent *event) override;

    QPixmap *pixmap;
};


#endif //TILEEDITOR_TILEWIDGET_H
