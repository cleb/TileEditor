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

class MainWindow : public QMainWindow {
    public:
        MainWindow();
    private:
        void createActions(void);
        void createMenu(void);

        void openFile(void);

        std::unique_ptr<QAction> openAct;
        std::unique_ptr<QMenu> fileMenu;

};


#endif //TILEEDITOR_MAINWINDOW_H
