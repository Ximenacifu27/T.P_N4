#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdint.h>
#include <QDebug>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->start( 5000);
    connect(ui->request,&QPushButton::clicked,this,&MainWindow::generar_grafica);

    connect(timer, &QTimer::timeout,this,&MainWindow::generar_grafica);
    connect(ui->comboBox,&QComboBox::currentTextChanged,this,&MainWindow::automatic_manual);

    connect(ui->tiempo, &QComboBox::currentTextChanged,this, &MainWindow::tiempo);
    connect(ui->clear_plot,&QPushButton::clicked,this,&MainWindow::clear);
    connect(ui->update,&QPushButton::clicked,this,&MainWindow::update);

    ///conectarse al servidor///
    connect(ui->connect,&QPushButton::clicked,this,&MainWindow::connect_tp_server);
    connect(&socket,&QTcpSocket::connected,this,&MainWindow::socket_connect);
    connect(&socket,&QTcpSocket::disconnected,this,&MainWindow::connection_lost);
    connect(&socket, &QTcpSocket::readyRead,this, &MainWindow::data_ready);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::tiempo(const QString &texto)
{
    if(texto == "0.3 seg"){
        timer->start(500);
    }else if (texto == "0.5 seg"){
        timer->start(500);
    }else if (texto == "1 seg"){
        timer->start(1000);
    }else if(texto == "2 seg"){
        timer->start(2000);
    }
}
void MainWindow::automatic_manual(const QString &texto)
{
    if (texto == "manual")
    {
        timer->stop();
        ui->request->setEnabled(true);
        ui->tiempo->setEnabled(false);
    }
    else if (texto == "automatica")///
    {
        ui->tiempo->setEnabled(true);
        ui->request->setEnabled(false);
    }
}
void MainWindow::to_graph()
{
    if(cumple==1)
    {    double dx=0.001;

        int dir=ui->start_data_address ->text().toInt();

        vueltas++;
        qDebug() << "vueltas:" <<vueltas;
        ui->grafico->legend->setVisible(true);

        if (x.size() >= puntos)
        {
            x.removeFirst();

            for (int i = 0; i < histo.size(); i++)
            {
                histo[i].removeFirst();
            }
        }

        double nuevoX = dx * vueltas;
        qDebug() << "x:" <<nuevoX;
        x.append(nuevoX);

        // Guardar los valores recibidos
        for (int i = 0; i < regist.size(); i++)
        {

           histo[i].append(regist[i]);

        }

        while (ui->grafico->graphCount() < histo.size())
        {
            ui->grafico->addGraph();
        }

        QStringList nombres = {"WDOG TIME", "WDOG ACTION", "FREQ REF", "RUN ENABLE","CMD FWD", "CMD START ", "FAULT ACK ", "PID SETP REF ","ENABLE PID ", "CURRENT LMT ", "ACCEL TIME","DECEL TIME",};

        QList<QColor> colores = {Qt::red, Qt::green, Qt::blue, Qt::cyan  , Qt::magenta,Qt::darkRed,Qt::darkGreen  ,Qt::darkBlue  ,Qt::darkYellow  ,Qt::darkCyan  ,Qt::darkMagenta  ,Qt::darkGray , };

        for (int i = 0; i < histo.size(); i++)
        {
            int pos = dir - 40001 + i;

            ui->grafico->graph(i)->setData(x, histo[i]);

            ui->grafico->graph(i)->setName(nombres[pos]);
            ui->grafico->graph(i)->setPen(QPen(colores[pos]));
        }

        ui->grafico->rescaleAxes();
        ui->grafico->replot();
    }
}
void MainWindow::data_ready()
{
    QByteArray respuesta = socket.readAll();
    QString trama = respuesta.toHex(' ').toUpper();
    qDebug() << "Trama tx:" << respuesta.toHex(' ').toUpper();

    int cant_Bytes = (uint8_t)respuesta[2];
    int cant_regr = cant_Bytes / 2;

    regist.clear();

    for (int i = 0; i < cant_regr; i++)
    {
        int pos = 3 + i * 2;

        uint16_t valor =((uint8_t)respuesta[pos] << 8) |(uint8_t)respuesta[pos + 1];
        regist.append(valor);
        qDebug() << "Registro:" << i+1<< "Valor:" << valor;
    }

    if (histo.size() != cant_regr)
    {
        histo.resize(cant_regr);
    }

    to_graph();
}
uint16_t MainWindow::CRC(uint8_t *data, uint16_t len)
{
    uint16_t i, j, temp_int, crc, temp_bit;
    crc = 0xFFFF;
    for ( i = 0; i < len; i++ )
    {
        temp_int = *data++;
        crc ^= temp_int;
        for ( j = 0; j < 8; ++j)
        {
            temp_bit = crc & 0x0001;
            crc >>= 1;
            if ( temp_bit != 0 )
                crc ^= 0xA001;
        }
    }
    return crc;
}
uint8_t MainWindow::get_MSB(uint16_t m){
    uint8_t MSB=(m>>8)& 0xFF;
    return MSB;
}
uint8_t MainWindow::get_LSD(uint16_t l){
    uint8_t LSD=l&0xFF;
    return LSD;
}
void MainWindow:: plot_generator()
{
    QByteArray b;
    b.append(ui->slave_address->text().toInt());
    b.append(0x03);

    uint16_t Addr=(ui->start_data_address ->text().toInt());
    b.append(get_MSB(Addr));
    b.append(get_LSD(Addr));

    uint16_t Count=ui->register_count->text().toInt();
    b.append(get_MSB(Count));
    b.append(get_LSD(Count));

    uint16_t value_crc =CRC((uint8_t*)b.data(), 6);
    b.append(get_LSD(value_crc));
    b.append(get_MSB(value_crc));

    //trama enviada:
    QString trama = b.toHex(' ').toUpper();

    qDebug() << "Trama enviada:" << b.toHex(' ').toUpper();
    socket.write(b);
}
////////genera el grafico////
void MainWindow::generar_grafica()
{
    plot_generator();
}

////////borrar_grafica/////////////
void MainWindow::clear()
{
    x.clear();
    histo.clear();
    vueltas = 0;

    ui->grafico->clearGraphs();
    ui->grafico->replot();
    timer->stop();
}
///////update//////
void MainWindow::update()
{
    puntos = ui->plot_points->text().toInt(&band);

    if (!band || puntos <= 0)
    {
        ui->plot_points->setStyleSheet("QLineEdit { background-color: red; color: white; }");
        return;
    }
    else
    {
        ui->plot_points->setStyleSheet("QLineEdit { background-color: white; color: black; }");
        cumple=1;
    }
}

//////conectar al servidor//////
void MainWindow::connect_tp_server()
{
    if(ui->connect->text()=="connect")
    {
        qDebug() << "Se conecta un cliente";
        QString ip=ui->server_ip->text();
        QString port=ui->server_tcp_port->text();

        socket.connectToHost(ip,port.toInt());
        ui->connect->setText("disconnect");
    }
    else
    {
        socket.disconnectFromHost();
        ui->connect->setText("connect");
    }
}

void MainWindow::socket_connect()
{
    qDebug()<<"connexion exitosa";
   ui->connect->setStyleSheet("background-color: red;");
}

void MainWindow::connection_lost()
{
    qDebug()<<"connection lost";
   ui->connect->setStyleSheet("background-color: green;");
}
