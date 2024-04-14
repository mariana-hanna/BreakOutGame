#ifndef GAME_H
#define GAME_H
#include "Ball.h"
#include <QObject>
#include <QGraphicsView>
#include<block.cpp>
#include"block.h"

class Game: public QGraphicsView
{

public:
    Game(QWidget* parent=NULL);


    void start();

public slots:
    //function to start the level
    void reStartLevel();

    //function to create a column of blocks
    void create_block_rows(double num);

    //to create a 2D column of blocks to create a grid of blocks
    void create_block_grid();

private:
    Ball* ball;
};



#endif // GAME_H
