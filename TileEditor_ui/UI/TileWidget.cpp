//
// Created by jakub on 27.04.21.
//

#include "TileWidget.h"
#include <QPainter>

TileWidget::TileWidget(Tile t) : QGraphicsPixmapItem(), tile(t) {
    QPixmap pixmap = QPixmap(8,8);
    QPainter painter(&pixmap);
    for(int y = 0; y < 8; y++) {
        for(int x  = 0; x < 8; x++) {
            unsigned int c = tile.get(x,y);
            unsigned char lastBit = (c & 1);
            unsigned char r = ((c & 8) >> 2) | lastBit;
            unsigned char g = ((c & 4) >> 1) | lastBit;
            unsigned char b = ((c & 2)) | lastBit;
            QColor color(r << 6,g << 6,b << 6);
            painter.setPen(color);
            painter.drawPoint(x,y);
        }
    }
    setPixmap(pixmap);
}