#include "Game.h"
#include "Ball.h"

Game::Game(QWidget *parent): QGraphicsView(parent)
{
    // Set the size of the scene
    scene()->setSceneRect(0, 0, 800, 600);

    ball=new Ball();

    scene()->addItem(ball);
}

void Game::start()
{
    ball->move();
}
