#ifndef BALL_H
#define BALL_H

#include <QGraphicsEllipseItem>
#include <QObject>



class Ball: public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT


public:
    Ball(QGraphicsItem* parent=0);

    //get the x coordinate of the center of the ball
    double getCenterX();

public slots:
    void move(); //to handle the movement of the ball

   // void gameOver();

private:

  double  xVelocity;
  double  yVelocity;

    //reverse the velocity if the ball out of bound
   // void reverseVelo();
    //handel the baddel collision
    //void paddelCollisonHandling();
    //handel the block collision
   // void BlockCollisionHandling();

};

#endif // BALL_H

