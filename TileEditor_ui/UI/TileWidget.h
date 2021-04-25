//
// Created by jakub on 25.04.21.
//

#ifndef TILEEDITOR_TILEWIDGET_H
#define TILEEDITOR_TILEWIDGET_H
#include <QWidget>
#include <memory>


class TileWidget : QWidget {
public:
    TileWidget(QWidget *parent);
private:
    std::unique_ptr<QPixmap> pixmap;

    void paintEvent(QPaintEvent *event) override;
};


#endif //TILEEDITOR_TILEWIDGET_H
