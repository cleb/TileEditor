#include <QApplication>
#include <memory>
#include "UI/MainWindow.h"
#include "System/System.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    std::shared_ptr<System> system = std::shared_ptr<System>(new System());
    std::unique_ptr<MainWindow> window = std::unique_ptr<MainWindow>(new MainWindow(system));
    window->show();
    return QApplication::exec();
}
