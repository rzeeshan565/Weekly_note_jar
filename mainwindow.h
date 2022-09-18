#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStandardPaths>
#include<QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void save_dir(QString& str);
    QString file_path = "";
    QString txt_loc = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString get_file_path();


private slots:
    void on_pushButton_save_clicked();

    void on_pushButton_change_dir_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
