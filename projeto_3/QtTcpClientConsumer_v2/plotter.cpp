#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <QDebug>
#include <vector>
#include <list>



Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    background = QColor(255,255,200);

}


void Plotter::setDados(std::vector<double> x_, std::vector<float> y_) {
    x = x_;
    y = y_;

    if (x.size() != y.size() || x.empty()) {
        qDebug() << "Erro: tamanhos incompatíveis ou vetores vazios.";
        return;
    }

    double Maxtime = *std::max_element(x.begin(), x.end());
    double Mintime = *std::min_element(x.begin(), x.end());
    float Maxvalue = *std::max_element(y.begin(), y.end());
    float Minvalue = *std::min_element(y.begin(), y.end());

    float timerange = (Maxtime - Mintime);
    float valuesrange = Maxvalue - Minvalue;

    qDebug() << "timerange" << timerange;
    qDebug() << "valuesrange" << valuesrange;

    normX.resize(x.size());
    normY.resize(y.size());

    if (timerange == 0) {
        qDebug() << "Aviso: Todos os valores em x são iguais.";
        std::fill(normX.begin(), normX.end(), 0.5); // Centraliza os valores em 0.5
    } else {
        for (size_t i = 0; i < x.size(); ++i) {
            normX[i] = (x[i] - Mintime) / timerange;

        }
    }

    if (valuesrange == 0) {
        qDebug() << "Aviso: Todos os valores em y são iguais.";
        std::fill(normY.begin(), normY.end(), 0.5); // Centraliza os valores em 0.5
    } else {
        for (size_t i = 0; i < y.size(); ++i) {
            normY[i] = (y[i] - Minvalue) / valuesrange;

        }
    }
    // Requisição de atualização do widget
    repaint();
}


void Plotter::setBackground(QColor color)
{
    background = color;
    repaint();
}



void Plotter::paintEvent(QPaintEvent *e) {
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    painter.setRenderHint(QPainter::Antialiasing);

    // Configurar caneta e pincel
    pen.setColor(QColor(0, 0, 255));
    pen.setWidth(2);
    painter.setPen(pen);

    brush.setColor(background);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    // Desenhar o fundo
    painter.drawRect(0, 0, width(), height());

    // Desenhar eixo horizontal
    pen.setColor(Qt::black);
    pen.setWidth(1);
    painter.setPen(pen);
    painter.drawLine(0, height() / 2, width(), height() / 2);

    // Verificar se há dados para desenhar
    if (normX.empty() || normY.empty() || normX.size() != normY.size()) {
        return;
    }

    // Ajustar os valores normalizados para as dimensões da tela
    QVector<QPointF> points;
    for (size_t i = 0; i < normX.size(); ++i) {
        float xScreen = normX[i] * width();         // Ajustar x para o comprimento da tela
        float yScreen = (1 - normY[i]) * height();  // Ajustar y para a altura da tela (inverter eixo Y)
        points.append(QPointF(xScreen, yScreen));
    }

    // Desenhar o gráfico conectando os pontos
    pen.setColor(Qt::red);  // Alterar cor para o gráfico
    pen.setWidth(2);
    painter.setPen(pen);


    for (int i = 0; i < points.size() - 1; ++i) {
        painter.drawLine(points[i], points[i + 1]);
    }
    // Sobrescrever os vetores x e y com os novos dados



}

