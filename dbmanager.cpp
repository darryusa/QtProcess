#include "dbmanager.h"
#include <QDebug>
#include <QSettings>
#include <QCoreApplication>
#include <QDir>
#include <transactionwindow.h>
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

   }
}


void DbManager::open()
{
    if(m_db.open())
    {

    }
    else
    {
        qDebug() << "dbnot open";
    }
}

void DbManager::close()
{
    m_db.close();
}

bool DbManager::pinChecker(QString& pin, QString& loginSender2)
{
    bool success = false;
    QSqlQuery query;

    query.prepare("SELECT pin,id, privilige FROM employee");
    if(query.exec())
    {
        while(query.next() )
        {
            if(pin.compare(query.value(0).toString()) == 0)
            {

                if(((loginSender2 == "staff" || loginSender2 == "inventory" || loginSender2 == "report")
                    && query.value(2).value<int>() > 1 )|| (loginSender2 == "sale"))
                {
                    if(loginSender2 == "sale")
                    {
                        TransactionWindow::setSender(query.value(1).toInt());
                    }
                    success = true;
                    break;
                }
                else
                {
                    break;
                }

            }
        }
    }
    else
    {
            qDebug() << "Error" << query.lastError();
    }
    return success;
}

