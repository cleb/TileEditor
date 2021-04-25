//
// Created by jakub on 25.04.21.
//

#include <QPainter>
#include "TileWidget.h"

TileWidget::TileWidget(QWidget *parent, std::shared_ptr<CoreSystem> sys) : QWidget(parent), system(sys) {
    pixmap = std::unique_ptr<QPixmap>(new QPixmap(400,400));
    setGeometry(0,100,1024,1024);
}

void TileWidget::resetTiles() {
    for(int y = 0; y < 50; y++){
        for(int x = 0; x < 50; x ++){
            Tile tile = system->getTile((y * 50 + x)*32);
            drawTile(x,y,tile);
        }
    }
}

void TileWidget::drawTile(int ox, int oy, Tile &tile) {
    QPainter painter(pixmap.get());
    for(int y = 0; y < 8; y++) {
        for(int x  = 0; x < 8; x++) {
            unsigned int c = tile.get(x,y);
            unsigned char lastBit = (c & 1);
            unsigned char r = ((c & 8) >> 2) | lastBit;
            unsigned char g = ((c & 4) >> 1) | lastBit;
            unsigned char b = ((c & 2)) | lastBit;
            QColor color(r << 6,g << 6,b << 6);
            painter.setPen(color);
            painter.drawPoint(x + ox*8,y + oy*8);
        }
    }
}

void TileWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawPixmap(0,0,1600,1600,*pixmap);

}
