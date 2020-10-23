#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>
#include <QColorDialog>

class PaintScene : public QGraphicsScene
{

    Q_OBJECT

public:
    explicit PaintScene(QObject *parent = 0);
    ~PaintScene();
    /**
     * @brief color цвет кисточки
     */
    QColor color;
    /**
     * @brief pickColor функция выбора цвет кисточки
     */
    void pickColor();
private:
    /**
     * @brief previousPoint Координаты предыдущей точки
     */
    QPointF previousPoint;
private:
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // PAINTSCENE_H
