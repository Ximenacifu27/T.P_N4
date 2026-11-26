/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *server_connection;
    QLineEdit *server_tcp_port;
    QLineEdit *server_ip;
    QPushButton *connect;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *request_config;
    QLineEdit *slave_address;
    QLineEdit *start_data_address;
    QLineEdit *register_count;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QGroupBox *request_interval;
    QComboBox *comboBox;
    QPushButton *request;
    QComboBox *tiempo;
    QGroupBox *plot_config;
    QLabel *label_6;
    QPushButton *update;
    QPushButton *clear_plot;
    QLineEdit *plot_points;
    QCustomPlot *grafico;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1122, 789);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        server_connection = new QGroupBox(centralwidget);
        server_connection->setObjectName("server_connection");
        server_connection->setGeometry(QRect(10, 10, 331, 131));
        server_tcp_port = new QLineEdit(server_connection);
        server_tcp_port->setObjectName("server_tcp_port");
        server_tcp_port->setGeometry(QRect(120, 80, 121, 28));
        server_ip = new QLineEdit(server_connection);
        server_ip->setObjectName("server_ip");
        server_ip->setGeometry(QRect(80, 40, 161, 28));
        connect = new QPushButton(server_connection);
        connect->setObjectName("connect");
        connect->setGeometry(QRect(250, 40, 71, 71));
        QFont font;
        font.setPointSize(8);
        connect->setFont(font);
        label = new QLabel(server_connection);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 63, 20));
        label_2 = new QLabel(server_connection);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 101, 20));
        request_config = new QGroupBox(centralwidget);
        request_config->setObjectName("request_config");
        request_config->setGeometry(QRect(350, 10, 311, 131));
        slave_address = new QLineEdit(request_config);
        slave_address->setObjectName("slave_address");
        slave_address->setGeometry(QRect(110, 30, 171, 28));
        start_data_address = new QLineEdit(request_config);
        start_data_address->setObjectName("start_data_address");
        start_data_address->setGeometry(QRect(140, 60, 141, 28));
        register_count = new QLineEdit(request_config);
        register_count->setObjectName("register_count");
        register_count->setGeometry(QRect(110, 90, 171, 28));
        label_5 = new QLabel(request_config);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 90, 101, 20));
        label_4 = new QLabel(request_config);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 121, 20));
        label_3 = new QLabel(request_config);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 30, 111, 20));
        request_interval = new QGroupBox(centralwidget);
        request_interval->setObjectName("request_interval");
        request_interval->setGeometry(QRect(670, 10, 120, 131));
        comboBox = new QComboBox(request_interval);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 30, 101, 28));
        request = new QPushButton(request_interval);
        request->setObjectName("request");
        request->setGeometry(QRect(10, 90, 101, 29));
        tiempo = new QComboBox(request_interval);
        tiempo->addItem(QString());
        tiempo->addItem(QString());
        tiempo->addItem(QString());
        tiempo->addItem(QString());
        tiempo->addItem(QString());
        tiempo->setObjectName("tiempo");
        tiempo->setGeometry(QRect(10, 60, 101, 28));
        plot_config = new QGroupBox(centralwidget);
        plot_config->setObjectName("plot_config");
        plot_config->setGeometry(QRect(800, 10, 291, 131));
        label_6 = new QLabel(plot_config);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 30, 71, 20));
        update = new QPushButton(plot_config);
        update->setObjectName("update");
        update->setGeometry(QRect(129, 30, 71, 61));
        clear_plot = new QPushButton(plot_config);
        clear_plot->setObjectName("clear_plot");
        clear_plot->setGeometry(QRect(210, 30, 71, 61));
        clear_plot->setIconSize(QSize(30, 30));
        plot_points = new QLineEdit(plot_config);
        plot_points->setObjectName("plot_points");
        plot_points->setGeometry(QRect(10, 60, 113, 28));
        grafico = new QCustomPlot(centralwidget);
        grafico->setObjectName("grafico");
        grafico->setGeometry(QRect(40, 170, 1021, 541));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1122, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        server_connection->setTitle(QCoreApplication::translate("MainWindow", "Server Connection:", nullptr));
        server_tcp_port->setText(QCoreApplication::translate("MainWindow", "502", nullptr));
        server_ip->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Server IP:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Server TCP Port:", nullptr));
        request_config->setTitle(QCoreApplication::translate("MainWindow", "Request Config:", nullptr));
        slave_address->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        start_data_address->setText(QCoreApplication::translate("MainWindow", "40001", nullptr));
        register_count->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Register count", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Start data address", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Slave Address", nullptr));
        request_interval->setTitle(QCoreApplication::translate("MainWindow", "Request Interval:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "manual", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "automatica", nullptr));

        request->setText(QCoreApplication::translate("MainWindow", "request", nullptr));
        tiempo->setItemText(0, QCoreApplication::translate("MainWindow", "0.3 seg", nullptr));
        tiempo->setItemText(1, QCoreApplication::translate("MainWindow", "0.5 seg", nullptr));
        tiempo->setItemText(2, QCoreApplication::translate("MainWindow", "1 seg", nullptr));
        tiempo->setItemText(3, QCoreApplication::translate("MainWindow", "2 seg", nullptr));
        tiempo->setItemText(4, QString());

        plot_config->setTitle(QCoreApplication::translate("MainWindow", "Plot Config:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Plot points", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "UPDATE", nullptr));
        clear_plot->setText(QCoreApplication::translate("MainWindow", "CLEAR \n"
"PLOT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
