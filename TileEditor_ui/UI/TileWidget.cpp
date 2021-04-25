//
// Created by jakub on 25.04.21.
//

#include <QPainter>
#include "TileWidget.h"

TileWidget::TileWidget(QWidget *parent) : QWidget(parent) {
    pixmap = std::unique_ptr<QPixmap>(new QPixmap(100,100));
    QPainter painter(pixmap.get());
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j ++){
            QColor color(i & 0xff,j & 0xff,((i+j)/2) &0xff);
            painter.setPen(color);
            painter.drawPoint(i,j);
        }
    }
    setGeometry(0,0,100,100);
}

void TileWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawPixmap(0,0,*pixmap);

}
