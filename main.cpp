#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include "GUI_Chat.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QWidget window;

    GUI_Chat* chat = new GUI_Chat();


    QGridLayout* layout = new QGridLayout();
    layout->addWidget(chat);
    window.setLayout(layout);


    window.show();

    return app.exec();

}
