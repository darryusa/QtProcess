#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <singleton.h>
#ifndef DBMANAGER_H
#define DBMANAGER_H


class DbManager
{
public:
    DbManager();
    bool addPerson(const QString& name);
    bool printPerson();
    bool pinChecker(QString& pin,QString& loginSender2);
    void open();
    void close();
private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
