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
#include "../System/System.h"

class MainWindow : public QMainWindow {
    public:
        MainWindow(std::shared_ptr<System> system);
    private:
        void createActions(void);
        void createMenu(void);
        void openFile(void);

        std::shared_ptr<System> system;

        std::unique_ptr<QAction> openAct;
        std::unique_ptr<QMenu> fileMenu;


};


#endif //TILEEDITOR_MAINWINDOW_H
