#include "paddle.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsScene>


void Paddle::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
            setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
            setPos(x()+10,y());
    }
}
Paddle::Paddle() {}
