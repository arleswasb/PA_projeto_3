#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QPaintEvent>
#include <QVector>
#include <QTime>
#include <vector>
/**
 * @brief A classe Plotter desenha um seno na tela
 */

class Plotter : public QWidget
{
    Q_OBJECT

private:
    std::vector<double> x;
    std::vector<float> y;
    std::vector<double> normX;
    std::vector<float> normY;
    QColor background;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void setBackground(QColor color);
public slots:
    void paintEvent(QPaintEvent *e);
    void setDados(std::vector<double> x_, std::vector<float> y_);
};

#endif // PLOTTER_H
