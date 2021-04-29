//
// Created by jakub on 24.04.21.
//

#ifndef TILEEDITOR_MAINWINDOW_H
#define TILEEDITOR_MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include "../../TileEditor_main/System/CoreSystem.h"
#include "TilesWidget.h"

class MainWindow : public QMainWindow {
public:
    MainWindow(std::shared_ptr<CoreSystem> system);

private:
    void createActions(void);

    void createMenu(void);

    void createWidgets(void);

    void openFile(void);

    std::shared_ptr<CoreSystem> system;
    QAction *openAct;
    QMenu *fileMenu;
    TilesWidget *tileWidget;
    QDockWidget *tileDockWidget;


};


#endif //TILEEDITOR_MAINWINDOW_H
