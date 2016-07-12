#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#ifndef DBMANAGER_H
#define DBMANAGER_H


class DbManager
{
public:
    DbManager(const QString& path);
    bool addPerson(const QString& name);
    bool printPerson();
    bool pinChecker(QString& pin);
private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
