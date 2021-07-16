#ifndef SINGLETONPATTERN_H
#define SINGLETONPATTERN_H

#include <QObject>
#include <QDebug>

class SingletonPattern
        : public QObject
{
    Q_OBJECT
private:
    explicit SingletonPattern(QObject *parent = nullptr);

public:
    static SingletonPattern* getDefaultInstance();
    void showMessage();
};

#endif // SINGLETONPATTERN_H
