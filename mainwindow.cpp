#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include<qfile.h>
#include<QDir>
#include<QFileDialog>
#include<QMessageBox>
#include<QStandardPaths>
#include<QSettings>
#include <windows.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd/MM/yyyy");
    QByteArray formattedTimeMsg = formattedTime.toLocal8Bit();

    ui->lineEdit_date->setText(formattedTime); //loads current date and show in date lineEdit

    file_path = get_file_path();
    QFileInfo Info(QString("%1/weekly_NoteJar_data.csv").arg(file_path));
    ui->lineEdit_lastM->setText(Info.lastModified().toString("dd/MM/yyyy"));
}
void MainWindow::save_dir(QString& str) {

    LPCWSTR sw = (const wchar_t*) txt_loc.utf16(); // this line and the line below is used to change file attributes to hidden.
    SetFileAttributesW(sw, FILE_ATTRIBUTE_HIDDEN); // by default the file_path.txt file is hidden
    QFile file(QString("%1/file_path.txt").arg(txt_loc));
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);
    out << str;
    out.flush();
    file.close();
}
QString MainWindow::get_file_path() {

    QFile file(QString("%1/file_path.txt").arg(txt_loc));
    if(!file.open(QFile::ReadWrite | QFile::Text)) {
        QMessageBox::warning(this, "..", "file not open");
    }
    QTextStream in(&file);
    file_path = in.readAll();
    if(file_path.isEmpty()) file_path = txt_loc; //if user has not changed directory yet, the default directory for the csv file is Desktop.
    else save_dir(file_path);
    file.close();
    return file_path;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_save_clicked()
{
    QString date = ui->lineEdit_date->text();
    QString event = ui->textEdit_event->toPlainText();
    event.push_back("\"");
    event.push_front("\"");

    if(file_path.isEmpty()) file_path = get_file_path();

    QFile file(QString("%1/weekly_NoteJar_data.csv").arg(file_path));

    if(!file.open(QIODevice::Append | QIODevice::Text))
        QMessageBox::warning(this, "Weekly note jar", "File not found");

    QTextStream out(&file);
    out << date << "," << event << "\n";
    out.flush();
    file.close();

    QMessageBox::information(this, "Weekly Note Jar", "File Saved");
    QApplication::quit();

}


void MainWindow::on_pushButton_change_dir_clicked()
{
    file_path = QFileDialog::getExistingDirectory(this, "Select output directory");
    save_dir(file_path);
}
