#include "Game.h"
#include "Ball.h"
#include"block.h"
#include<block.cpp>


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

    //The grid of blocks will be created at the beginning of the game
    create_block_grid();
}

//Function definitions of the blocks

// create_block_rows function
void block:: create_block_rows(double num)
{
    //loop to create blocks
    for (size_t i=0;i<5;i++)
    {
        block* blockk= new block();
        blockk->setPos(num, i*35);
        scene->addItem(blockk);
    }
}

//create_block_grid function definition
void block:: create_block_grid()
{
    //loop of columns to create a grid of blocks
    for (size_t i=0; i<5;i++)
    {
        create_block_rows(i*35);
    }
}

