#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
////
#include <QTcpSocket>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //////
      int vueltas=0;
      int puntos;
      double seg=0.1;
      int cumple=0;

private:
    Ui::MainWindow *ui;

///////
///
public slots:
    void generar_grafica();
    void plot_generator();
    void data_ready();
    void to_graph();
    ///void on_request_clicked();
    void automatic_manual(const QString &texto);
    void clear();
    void update();
    void tiempo(const QString &texto);

    uint16_t CRC(uint8_t *data, uint16_t len);
    uint8_t get_MSB(uint16_t m);
    uint8_t get_LSD(uint16_t l);

    ///conectarse al servidor:
    void connect_tp_server();
    void socket_connect();
    void connection_lost();



private:
    QTimer *timer;
    QTcpSocket socket;

    QVector<uint16_t> regist;
    QVector<QVector<double>> histo;
    QVector<double> x;
    bool band;

///////
};
#endif // MAINWINDOW_H
