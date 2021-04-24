#include <QApplication>
#include <memory>
#include "UI/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    std::unique_ptr<MainWindow> window = std::unique_ptr<MainWindow>(new MainWindow());
    window->show();
    return QApplication::exec();
}
