#include "Game.h"
#include "Ball.h"
#include"block.h"
#include<block.cpp>


//Game constructor
Game::Game(QWidget *parent): QGraphicsView(parent)
{
    // Set the size of the scene
    scene()->setSceneRect(0, 0, 800, 600);
    QPixmap pixmap1("paddle.png");
    pixmap1 = pixmap1.scaledToWidth(50);
    pixmap1 = pixmap1.scaledToHeight(50);

    // create an item to add to the scene
    Paddle * player = new Paddle();
    player->setPixmap(pixmap1);
    player->setPos(400,550);
    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    ball=new Ball();

    scene()->addItem(ball);
}


//Functions
void Game::start()
{
    ball->move();

    //The grid of blocks will be created at the beginning of the game
    create_block_grid();

}
// create_block_rows function
void Game:: create_block_rows(double num)
{
    //loop to create blocks
    for (size_t i=0;i<5;i++)
    {
        block* blockk= new block();
        blockk->setPos(num, i*35);
        scene()->addItem(blockk);
    }
}

//create_block_grid function definition
void Game:: create_block_grid()
{
    //loop of columns to create a grid of blocks
    for (size_t i=0; i<5;i++)
    {
        create_block_rows(i*35);
    }
}





