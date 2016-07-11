#include "dbmanager.h"

DbManager::DbManager(const QString &amp;path)
{
   m_db = QSqlDatabase::addDatabase("QSQLITE");
   m_db.setDatabaseName(path);

   if (!m_db.open())
   {
      qDebug() << "Error: connection with database fail";
   }
   else
   {
      qDebug() << "Database: connection ok";
   }
}
    class DbManager
    {
    public:
        DbManager(const QString& path);
    private:
        QSqlDatabase m_db;
    };

    bool DbManager::addPerson(const QString&amp; name)
    {
       bool success = false;
       // you should check if args are ok first...
       QSqlQuery query;
       query.prepare("INSERT INTO people (name) VALUES (:name)");
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
