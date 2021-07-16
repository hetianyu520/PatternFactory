#include "SingletonPattern.h"

SingletonPattern::SingletonPattern(QObject *parent)
    : QObject (parent)
{
    qDebug() << "you success create SingletonPattern object" << endl;
}

SingletonPattern *SingletonPattern::getDefaultInstance()
{
    static SingletonPattern sp;
    return &sp;
}

void SingletonPattern::showMessage()
{
    qDebug() << "there is a message from SingletonPattern object" << endl;
}
