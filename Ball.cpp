#include "Ball.h"
#include <QTimer>
#include <QGraphicsScene>

Ball::Ball(QGraphicsItem* parent): QObject(), QGraphicsEllipseItem(parent)
{
    // the size of the ball
    setRect(0, 0, 15, 15);

    // Set the initial velocity of the ball
    xVelocity = 0;
    yVelocity = -5;

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(16);
}

void Ball::move()
{
    // Move the ball
    setPos(x() + xVelocity, y() + yVelocity);

    // handling Collision
    if (x() < 0 || x() + rect().width() > scene()->width())
    {
        xVelocity = -xVelocity;
    }
    if (y() < 0 )
    { yVelocity = -yVelocity;
    }
   // else if (y()+ rect().height() >scene()->height() )


}

double Ball::getCenterX(){
    return x() + rect().width()/2;
}
