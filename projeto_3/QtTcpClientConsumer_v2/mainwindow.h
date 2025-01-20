#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "plotter.h"
#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QListWidget>
#include <vector>

namespace Ui {
class MainWindow;
}
class Plotter; // Declaração antecipada da classe Plotter

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  
public slots:

  void Conectar();
  void StartDados();
  void StopDados();
  void Desconectar();
  void getMaquinas();
  void onItemClicked(QListWidgetItem *item);
  void timerEvent(QTimerEvent *e);
  void mudaTempo();
  void config();
  void CloseAll();
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QString str_maq;
  QListWidget *listWidget;
  QWidget *Widget;
  QString List_servidor;
  std::vector<double> x;
  std::vector<float> y;
  int timerId,tempo;
};

#endif // MAINWINDOW_H
