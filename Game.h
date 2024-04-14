#ifndef GAME_H
#define GAME_H
#include "Ball.h"
#include <QObject>
#include <QGraphicsView>


class Game: public QGraphicsView
{

public:
    Game(QWidget* parent=NULL);


    void start();

public slots:
    void reStartLevel();

private:
    Ball* ball;
};



#endif // GAME_H
