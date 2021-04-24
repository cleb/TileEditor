#include <QApplication>
#include <memory>
#include "UI/MainWindow.h"
#include "../TileEditor_main/System/CoreSystem.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    std::shared_ptr<CoreSystem> system = std::shared_ptr<CoreSystem>(new CoreSystem());
    std::unique_ptr<MainWindow> window = std::unique_ptr<MainWindow>(new MainWindow(system));
    window->show();
    return QApplication::exec();
}
