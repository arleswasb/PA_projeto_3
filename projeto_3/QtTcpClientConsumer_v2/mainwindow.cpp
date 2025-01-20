#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QListWidget>
#include <QPlainTextEdit>
#include <QMessageBox>
#include <QColorDialog>
#include <plotter.h>
#include <vector>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  socket = new QTcpSocket(this);

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(StartDados()));
  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(StopDados()));
  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Conectar()));
  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Desconectar()));
  connect(ui->pushButtonUpdate,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getMaquinas()));
  connect(ui->listWidget,
          SIGNAL(itemClicked(QListWidgetItem*)),
          this, SLOT(onItemClicked(QListWidgetItem*)));
  connect(ui->horizontalSliderTempo,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(mudaTempo()));
  connect(ui->actionConfig,
          SIGNAL(triggered(bool)),
          this,
          SLOT(config()));
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
        ui->lineEditServidor->setEnabled(false);
        ui->pushButtonConnect->setEnabled(false);
        ui->pushButtonDisconnect->setEnabled(true);
        ui->lineEditConexao->setText("Connected");
    }
    else{
        ui->lineEditConexao->clear();
        ui->lineEditConexao->setText("Informe o servidor");
    }

}

void MainWindow::StartDados()
{
    if(socket->state()== QAbstractSocket::ConnectedState){
        ui->horizontalSliderTempo->setEnabled(true);
        ui->pushButtonStart->setEnabled(false);
        ui->pushButtonStop->setEnabled(true);
        timerId = startTimer(ui->horizontalSliderTempo->value()*100);
    }
}

void MainWindow::StopDados()
{
    if (timerId != 0) {
        killTimer(timerId);
        qDebug() << "resetou o ID";
        timerId=0;
    }
    ui->pushButtonStart->setEnabled(true);
    ui->pushButtonStop->setEnabled(false);
    ui->horizontalSliderTempo->setEnabled(false);
}

void MainWindow::Desconectar()
{
    socket->disconnectFromHost();
    qDebug() << "Desconnected";
    ui->lineEditServidor->setEnabled(true);
    ui->pushButtonConnect->setEnabled(true);
    ui->pushButtonDisconnect->setEnabled(false);
    ui->horizontalSliderTempo->setEnabled(false);
    ui->lineEditConexao->clear();
    ui->lineEditConexao->setText("Desconnected");
}




void MainWindow::getMaquinas()
{

    qDebug() << "to get maquinas...";
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            qDebug() << "reading...";
            socket->write("list\r\n");
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            ui->listWidget->clear();

            while(socket->bytesAvailable()){
                str_maq = socket->readLine().replace("\n", "").replace("\r", "");
                ui->listWidget->addItem(str_maq);

            }
        }
    }
}

void MainWindow::onItemClicked(QListWidgetItem *item)
{
    // Obter o texto do item clicado e armazenar em uma variável
    List_servidor = item->text();
    ui->pushButtonStart->setEnabled(true);
    ui->pushButtonStop->setEnabled(true);
    qDebug() << "Item selecionado:" << List_servidor;
}


void MainWindow::timerEvent(QTimerEvent *e)
{

    qint64 samplex;
    float sampley;


    if (e->timerId() == timerId) {
        //Código que será executado a cada intervalo do timer
        qDebug() << "Timer disparou!";
        QString str;
        QByteArray array;
        QStringList list;
        qDebug() << "to get data...";
        if(socket->state() == QAbstractSocket::ConnectedState){
            if(socket->isOpen()){
                qDebug() << "reading...";
                QString command = "get " + List_servidor + " 30\r\n";
                socket->write(command.toUtf8());
                socket->waitForBytesWritten();
                socket->waitForReadyRead();
                qDebug() << socket->bytesAvailable();
                x.clear();
                y.clear();
                while(socket->bytesAvailable()){
                    str = socket->readLine().replace("\n","").replace("\r","");
                    list = str.split(" ");
                    if(list.size() == 2){
                        bool okX, okY;
                        str = list.at(0);

                        samplex = str.toDouble(&okX);  // Converte X para float

                        str = list.at(1);

                        sampley = str.toFloat(&okY);  // Converte Y para float

                        if (!okX || !okY) {
                            qDebug() << "Erro ao converter os dados para float.";
                            continue; // Ignora essa linha se a conversão falhar
                        }

                        x.push_back(samplex);
                        y.push_back(sampley);
                    }
                    else if (list.size() == 0){
                        ui->lineEditConexao->setText("sem conecção com o servidor");
                    }
                }
                // terminou de ler as amostras
                ui->widgetPlotter->setDados(x,y);
            }
        }
    }
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

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}

void MainWindow::config()
{
    QMessageBox box;
    QString texto;

    QColorDialog colordialog;
    colordialog.exec();
    ui->widgetPlotter->setBackground(colordialog.currentColor());
}



void MainWindow::CloseAll()
{
    if (timerId != 0) {
        killTimer(timerId);
    }
    socket->disconnectFromHost();
    if (!x.empty()) {
        x.clear(); // Remove todos os elementos de x
    }
    if (!y.empty()) {
        y.clear(); // Remove todos os elementos de y
    }
    close();
}

