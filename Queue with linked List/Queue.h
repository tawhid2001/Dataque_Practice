#include<iostream>
using namespace std;

template <class T>
class node
{
    public:
    T data;
    node *next;
    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class Queue
{
private:
    node<T> *front;
    node<T> *tail;
public:
    Queue();
    ~Queue();
    void enQueue(T);
    void deQueue();
    T peek();
    bool empty();
    void print();
};


class EmptyQueue{

};