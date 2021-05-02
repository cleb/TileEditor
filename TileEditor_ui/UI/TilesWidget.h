//
// Created by jakub on 25.04.21.
//

#ifndef TILEEDITOR_TILESWIDGET_H
#define TILEEDITOR_TILESWIDGET_H
#include <QWidget>
#include <QGridLayout>
#include <QGraphicsView>
#include <memory>
#include <vector>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include "../../TileEditor_main/System/Tile.h"
#include "../../TileEditor_main/System/CoreSystem.h"


class TilesWidget : public QWidget {
public:
    TilesWidget(QWidget *parent, std::shared_ptr<CoreSystem> system);
    void resetTiles();
public slots:
    void offsetChanged();
private:

    std::shared_ptr<CoreSystem> system;
    int offset;


    QGraphicsView *view;
    QGraphicsScene *scene;
    QBoxLayout *layout;
    QSpinBox *offsetBox;
    QLabel *offsetLabel;
    QPushButton *offsetSetButton;
};


#endif //TILEEDITOR_TILESWIDGET_H
