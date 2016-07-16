#include "dbmanager.h"
#include <QDebug>
#include <QSettings>
#include <QCoreApplication>
#include <QDir>
DbManager::DbManager()
{
   m_db = QSqlDatabase::addDatabase("QSQLITE");
   QString folderPath = QCoreApplication::applicationDirPath();
   QString dbPath = QDir(folderPath).filePath("processDB");
   m_db.setDatabaseName(dbPath);

   if (!m_db.open())
   {
      qDebug() << "Error: connection with database fail";
   }
   else
   {
        qDebug() <<"success";
   }
}
bool DbManager::addPerson(const QString& name)
{
   bool success = false;
   // you should check if args are ok first...
   QSqlQuery query;
   query.prepare("INSERT INTO employee (first) VALUES (:name)");
   query.bindValue(":name", name);
   if(query.exec())
   {
       success = true;
   }
   else
   {
        qDebug() << "addPerson error:  "
                 << query.lastError();
   }

   return success;
}

bool DbManager::pinChecker(QString& pin)
{
    bool success = false;
    QSqlQuery query;
    query.prepare("SELECT PIN FROM employee");
    if(query.exec())
    {
        while(query.next() )
        {
            if(pin.compare(query.value(0).toString()) == 0)
            {
                success = true;
                break;
            }
        }
        m_db.close();
        m_db.removeDatabase(m_db.connectionName());
        return success;
    }
    else
    {
            qDebug() << "Error" << query.lastError();
    }
}

