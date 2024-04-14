#include "block.h"
#include<QBRush>
#include<QGraphicsRectItem>

//constructor definition
block::block(QGraphicsRectItem *parent):QGraphicsRectItem(parent)
{
    //to create rectangles (blocks)
    setRect(0,0,30,30);

    //creating a brush
    QBrush brush;
    brush.setColor(Qt::red);
    brush.setStyle(Qt:: SolidPattern);
    setBrush (brush);

}
