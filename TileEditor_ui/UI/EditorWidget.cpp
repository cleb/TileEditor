//
// Created by jakub on 21.05.21.
//

#include <QBoxLayout>
#include "EditorWidget.h"

EditorWidget::EditorWidget(QWidget *parent): QWidget(parent), scene(new QGraphicsScene(this)) {
    view = new QGraphicsView(scene);
    layout = new QBoxLayout(QBoxLayout::LeftToRight);
    layout->addWidget(view);
    setLayout(layout);
}