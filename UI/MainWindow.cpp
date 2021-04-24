//
// Created by jakub on 24.04.21.
//

#include "MainWindow.h"
#include <QFileDialog>
#include <fstream>


MainWindow::MainWindow(std::shared_ptr<System>) : system(system) {
    createActions();
    createMenu();
}

void MainWindow::createActions() {
        openAct = std::unique_ptr<QAction>(new QAction(tr("&Open"), this));
        connect(openAct.get(), &QAction::triggered, this, &MainWindow::openFile);
}

void MainWindow::createMenu() {
    fileMenu = std::unique_ptr<QMenu>(menuBar()->addMenu("&File"));
    fileMenu->addAction(openAct.get());
}

void MainWindow::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, tr("Open file"), tr("All files (*.*)"));
    std::ifstream file(filename.toStdString(), std::ios::binary);

    // read the data:
    auto data = std::vector<unsigned char>((std::istreambuf_iterator<char>(file)),
                             std::istreambuf_iterator<char>());

}