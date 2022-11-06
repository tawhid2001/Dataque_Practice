#include <iostream>
#include "point.cpp"
using namespace std;

int main()
{
    point a(0, 6), b(2, 4), mid;
    cout << "a:";
    a.display();
    cout << "b:";
    b.display();
    cout << "mid:";
    mid.display();
    mid = a.midpoint(b);
    a.display();
    cout << "b:";
    b.display();
    cout << "mid:";
    mid.display();
    return 0;
}