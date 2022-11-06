#include "point.h"
#include <iostream>
using namespace std;
point ::point()
{
    this->x = 0.0;
    this->y = 0.0;
}
point ::point(float x, float y)
{
    this->x = x;
    this->y = y;
}

point point ::midpoint(point p)
{
    point temp;
    temp.x = (this->x + p.x) / 2.0;
    temp.y = (this->y + p.y) / 2.0;
    return temp;
}

void point ::display()
{
    cout << "(x,y) = " << this->x <<","<< this->y << endl;
}