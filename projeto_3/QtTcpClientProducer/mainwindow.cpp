#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QSlider>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  tempo = ui->horizontalSliderTempo->value()*100;
  socket = new QTcpSocket(this);

  connect(ui->pushButtonDesconect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Desconectar()));
  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Conectar()));
  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(EnviaDados()));
  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(BloqueiaDados()));
  connect(ui->horizontalSliderTempo,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(mudaTempo()));
  connect(ui->actionClose,
          SIGNAL(triggered(bool)),
          this,
          SLOT(CloseAll()));

}



void MainWindow::Conectar()
{
    QString servidor;
    servidor = ui->lineEditServidor->text();
    socket->connectToHost(servidor,1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        ui->lineEditConexao->setText("Connected");
        ui->pushButtonConnect->setEnabled(false);
        ui->pushButtonDesconect->setEnabled(true);
        ui->pushButtonStart->setEnabled(true);
        ui->pushButtonStop->setEnabled(false);
    }
    else{
        ui->lineEditConexao->clear();
        ui->lineEditConexao->setText("Informe o servidor");
    }

}

void MainWindow::Desconectar()
{
    socket->disconnectFromHost();
    qDebug() << "Desconnected";
    ui->pushButtonConnect->setEnabled(true);
    ui->pushButtonDesconect->setEnabled(false);
    ui->pushButtonStart->setEnabled(false);
    ui->pushButtonStop->setEnabled(false);
    ui->horizontalSliderTempo->setEnabled(false);
    ui->horizontalSliderMin->setEnabled(false);
    ui->horizontalSliderMax->setEnabled(false);
    ui->lineEditConexao->clear();
    ui->lineEditConexao->setText("Desconnected");
}

void MainWindow::EnviaDados()
{
    if(socket->state()== QAbstractSocket::ConnectedState){
        ui->horizontalSliderTempo->setEnabled(true);
        ui->horizontalSliderMin->setEnabled(true);
        ui->horizontalSliderMax->setEnabled(true);
        ui->pushButtonStart->setEnabled(false);
        ui->pushButtonStop->setEnabled(true);
        timerId = startTimer(tempo);
    }
}

void MainWindow::BloqueiaDados()
{
 if (timerId != 0) {
        killTimer(timerId);
        timerId=0;
 }
 ui->pushButtonStart->setEnabled(true);
 ui->pushButtonStop->setEnabled(false);
 ui->horizontalSliderTempo->setEnabled(false);
 ui->horizontalSliderMin->setEnabled(false);
 ui->horizontalSliderMax->setEnabled(false);

}

void MainWindow::mudaTempo()
{
    if (timerId != 0) {
        qDebug() << "Timerid: " << timerId;
        killTimer(timerId);
        timerId=0;

    }
    timerId = startTimer(ui->horizontalSliderTempo->value()*100);
}


void MainWindow::timerEvent(QTimerEvent *e)
{
    // qDebug() << timerId << " " << e->timerId();

    if (e->timerId() == timerId) {
        // Código que será executado a cada intervalo do timer
        qDebug() << "Timer disparou!";


        QDateTime datetime;
        qint64 msecdate;
        int valor, diff;
        if(socket->state()== QAbstractSocket::ConnectedState){

            msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
            diff = (ui->horizontalSliderMax->value()-ui->horizontalSliderMin->value());
            valor = ui->horizontalSliderMin->value()+rand()%diff;
            str = "set "+ QString::number(msecdate) + " " +
                  QString::number(valor)+"\r\n";

            qDebug() << "str: " << str;
            qDebug() << socket->write(str.toStdString().c_str())
                     << " bytes written";
            CopiaTexto();
            if(socket->waitForBytesWritten(3000)){
                qDebug() << "wrote";
            }
        }
    }
}

void MainWindow::CopiaTexto()
{
    QString texto;
    texto = str;
    ui->plainTextEdit->insertPlainText(texto);
}

void MainWindow::CloseAll()
{
    if (timerId != 0) {
        killTimer(timerId);
    }
    socket->disconnectFromHost();
    close();
}


MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
