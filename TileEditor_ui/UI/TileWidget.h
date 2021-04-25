//
// Created by jakub on 25.04.21.
//

#ifndef TILEEDITOR_TILEWIDGET_H
#define TILEEDITOR_TILEWIDGET_H
#include <QWidget>
#include <memory>
#include <vector>
#include "../../TileEditor_main/System/Tile.h"
#include "../../TileEditor_main/System/CoreSystem.h"


class TileWidget : QWidget {
public:
    TileWidget(QWidget *parent, std::shared_ptr<CoreSystem> system);
    void resetTiles();
    void drawTile(int x, int y, Tile &tile);
private:
    std::vector<Tile> tiles;
    std::unique_ptr<QPixmap> pixmap;
    std::shared_ptr<CoreSystem> system;

    void paintEvent(QPaintEvent *event) override;
};


#endif //TILEEDITOR_TILEWIDGET_H
