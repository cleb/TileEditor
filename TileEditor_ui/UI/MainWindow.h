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
#include "TileWidget.h"

class MainWindow : public QMainWindow {
public:
    MainWindow(std::shared_ptr<CoreSystem> system);

private:
    void createActions(void);

    void createMenu(void);

    void createWidgets(void);

    void openFile(void);

    std::shared_ptr<CoreSystem> system;

    std::unique_ptr<QAction> openAct;
    std::unique_ptr<QMenu> fileMenu;
    std::unique_ptr<TileWidget> tileWidget;


};


#endif //TILEEDITOR_MAINWINDOW_H
