#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QSlider>
#include <QString>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
  void Conectar();
  void Desconectar();
  void EnviaDados();
  void BloqueiaDados();
  void mudaTempo();
  void timerEvent(QTimerEvent *e);
  void CopiaTexto();
  void CloseAll();

private:
  Ui::MainWindow *ui;
  int timerId;
  int tempo;
  QString str;
  QTcpSocket *socket;

};

#endif // MAINWINDOW_H
