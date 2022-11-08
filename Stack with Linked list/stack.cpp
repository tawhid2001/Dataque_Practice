#include "stack.h"
#include <iostream>
using namespace std;

template <class T>
stack<T>::stack()
{
    this->top = NULL;
}

template <class T>
stack<T>::~stack()
{
    node<T> *temp;
    while (this->top!=NULL)
    {
        temp = this->top;
        this->top=this->top->next;
        delete temp;
    }
    
}

template <class T>
bool stack<T>::IsEmpty()
{
    return this->top == NULL;
}

template <class T>
void stack<T>::Push(T data)
{
    node<T> *newnode = new node<T>(data);
    if (IsEmpty())
        this->top = newnode;
    else
    {
        newnode->next = this->top;
        this->top = newnode;
    }
}

template <class T>
void stack<T>::Pop()
{
    if (IsEmpty())
        throw Emptystack();
    else
    {
        node<T> *temp = this->top;
        this->top = temp->next;
        delete temp;
    }
}

template <class T>
T stack<T>::Top()
{
    if (IsEmpty())
        throw Emptystack();
    else
        return this->top->data;
}

template <class T>
void stack<T>::Print()
{
    if (IsEmpty())
        throw Emptystack();
    else
    {
         node<T> *temp=this->top;
         while (temp!= NULL)
         {
            cout<<temp->data<<" ";
            temp=temp->next;
         }
    }
}