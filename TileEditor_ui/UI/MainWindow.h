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
#include "EditorWidget.h"

class MainWindow : public QMainWindow {
Q_OBJECT
public:
    MainWindow(std::shared_ptr<CoreSystem> system);

public slots:
    void tileClicked(unsigned int t);

private:
    void createActions(void);

    void createMenu(void);

    void createWidgets(void);

    void openFile(void);

    void connectSignals(void);

    std::shared_ptr<CoreSystem> system;
    QAction *openAct;
    QMenu *fileMenu;
    TilesWidget *tileWidget;
    QDockWidget *tileDockWidget;
    QDockWidget *editorDockWidget;
    EditorWidget *editorWidget;


};


#endif //TILEEDITOR_MAINWINDOW_H
