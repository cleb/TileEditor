//
// Created by jakub on 24.04.21.
//

#include "MainWindow.h"
#include "../../TileEditor_main/Rom/RomFile.h"
#include <QFileDialog>
#include <fstream>


MainWindow::MainWindow(std::shared_ptr<CoreSystem>) : system(system) {
    createActions();
    createMenu();
    createWidgets();
}

void MainWindow::createActions() {
        openAct = std::unique_ptr<QAction>(new QAction(tr("&Open"), this));
        connect(openAct.get(), &QAction::triggered, this, &MainWindow::openFile);
}

void MainWindow::createMenu() {
    fileMenu = std::unique_ptr<QMenu>(menuBar()->addMenu("&File"));
    fileMenu->addAction(openAct.get());
}

void MainWindow::createWidgets() {
    tileWidget = std::unique_ptr<TileWidget>(new TileWidget(this, system));
}

void MainWindow::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, tr("Open file"), tr("All files (*.*)"));
    std::ifstream file(filename.toStdString(), std::ios::binary);

    // read the data:
    auto data = std::vector<unsigned char>((std::istreambuf_iterator<char>(file)),
                             std::istreambuf_iterator<char>());


    std::shared_ptr<RomDataProvider> provider = std::shared_ptr<RomDataProvider>(new RomFile(data));
    system->setData(provider);
    tileWidget->resetTiles();
}