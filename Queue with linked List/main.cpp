#include "Queue.cpp"
#include <iostream>
using namespace std;

int main()
{
    Queue<int> q;
    q.enQueue(2);
    q.enQueue(4);
    q.enQueue(5);
    q.print();
    q.~Queue();
    q.print();
    return 0;
}