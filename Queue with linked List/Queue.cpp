#include "Queue.h"
#include <iostream>
using namespace std;

template <class T>
Queue<T>::Queue()
{
    this->front = NULL;
    this->tail = NULL;
}

template <class T>
Queue<T>::~Queue()
{
    node<T> *temp;
    while (temp != NULL)
    {
        temp = this->front;
        this->front = this->front->next;
        delete temp;
    }
}

template <class T>
bool Queue<T>::empty()
{
    return this->front == NULL;
}

template <class T>
void Queue<T>::enQueue(T data)
{
    node<T> *newnode = new node<T>(data);
    if (empty())
    {
        this->front = this->tail = newnode;
    }
    else
    {
        this->tail->next = newnode;
        this->tail = newnode;
    }
}

template <class T>
void Queue<T>::deQueue()
{
    if (empty())
        throw EmptyQueue();

    node<T> *temp = this->front;
    this->front = this->front->next;
    delete temp;
}

template <class T>
T Queue<T>::peek()
{
    if (empty())
        throw EmptyQueue();

    return this->front->data;
}

template <class T>
void Queue<T>::print()
{
    if (empty())
        throw EmptyQueue();
    else
    {
        node<T> *temp = this->front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}