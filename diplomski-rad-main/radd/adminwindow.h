#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void updateTableView(int index);
    void onTableViewClicked(const QModelIndex& index);
      void on_updateButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::AdminWindow *ui;
    QSqlQueryModel *model;
};

#endif // ADMINWINDOW_H
