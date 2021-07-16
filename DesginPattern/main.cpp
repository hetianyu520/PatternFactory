#include <QCoreApplication>

#include <SingletonPattern.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SingletonPattern *sp1 = SingletonPattern::getDefaultInstance();
    sp1->showMessage();

    SingletonPattern *sp2 = SingletonPattern::getDefaultInstance();
    sp2->showMessage();

    return a.exec();
}
