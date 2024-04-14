#include "Game.h"
#include <QGraphicsEllipseItem>
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>

Game* game;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene* scene=new QGraphicsScene();

    QGraphicsEllipseItem* ball=new QGraphicsEllipseItem();
    ball->setRect(0,0,30,30);

    scene->addItem(ball);

    QGraphicsView* view= new QGraphicsView(scene);

    view->show();


    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    return a.exec();
}
