//
// Created by jakub on 21.05.21.
//

#ifndef TILEEDITOR_EDITORWIDGET_H
#define TILEEDITOR_EDITORWIDGET_H


#include <QWidget>
#include <QGraphicsView>
#include "../../TileEditor_main/System/Tile.h"

class EditorWidget : public QWidget{
public:
    EditorWidget(QWidget *parent);
    void editTile(Tile tile);
private:
    QGraphicsView *view;
    QGraphicsScene *scene;
    QBoxLayout *layout;
};


#endif //TILEEDITOR_EDITORWIDGET_H
