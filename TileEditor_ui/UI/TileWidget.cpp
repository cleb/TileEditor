//
// Created by jakub on 27.04.21.
//

#include "TileWidget.h"
#include <QPainter>

TileWidget::TileWidget(Tile t, Palette *palette) : QGraphicsPixmapItem(), tile(t) {
    QPixmap pixmap = QPixmap(8,8);
    QPainter painter(&pixmap);
    for(int y = 0; y < 8; y++) {
        for(int x  = 0; x < 8; x++) {
            const unsigned int c = tile.get(x,y);
            const Color color = palette->get(c);
            QColor qColor(color.r,color.g,color.b);
            painter.setPen(qColor);
            painter.drawPoint(x,y);
        }
    }
    setPixmap(pixmap);
}