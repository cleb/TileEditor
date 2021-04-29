//
// Created by jakub on 24.04.21.
//

#include "MainWindow.h"
#include "../../TileEditor_main/Rom/RomFile.h"
#include <QFileDialog>
#include <QDockWidget>
#include <fstream>


MainWindow::MainWindow(std::shared_ptr<CoreSystem> sys) : system(sys) {
    createActions();
    createMenu();
    createWidgets();
}

void MainWindow::createActions() {
        openAct = new QAction(tr("&Open"), this);
        connect(openAct, &QAction::triggered, this, &MainWindow::openFile);
}

void MainWindow::createMenu() {
    fileMenu = menuBar()->addMenu("&File");
    fileMenu->addAction(openAct);
}

void MainWindow::createWidgets() {
    tileDockWidget = new QDockWidget(tr("Tile View"), this);
    tileDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    tileWidget = new TilesWidget(tileDockWidget, system);
    tileDockWidget->setWidget(tileWidget);

}

void MainWindow::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, tr("Open file"), tr("All files (*.*)"));
    std::ifstream file(filename.toStdString(), std::ios::binary);

    // read the data:
    auto data = std::vector<unsigned char>((std::istreambuf_iterator<char>(file)),
                             std::istreambuf_iterator<char>());


    system->setData(new RomFile(data));
    tileWidget->resetTiles();
}