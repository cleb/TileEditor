//
// Created by jakub on 27.04.21.
//

#include "TileWidget.h"
#include <QPainter>

TileWidget::TileWidget(QWidget *parent, Tile t) : QWidget(parent), tile(t) {
    pixmap = new QPixmap(8,8);
    setFixedWidth(32);
    setFixedHeight(32);
    QPainter painter(pixmap);
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
}

void TileWidget::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(0,0,32,32,*pixmap);
}