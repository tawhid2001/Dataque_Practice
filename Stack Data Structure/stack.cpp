#include "stack.h"

template <class T>
stack<T>::stack()
{
    this->top = -1;
}

template <class T>
bool stack<T>::IsEmpty()
{
    return this->top == -1;
}

template <class T>
bool stack<T>::IsFull()
{
    return this->top == MAX_SIZE - 1;
}

template <class T>
void stack<T>::Push(T data)
{
    if (IsFull())
        throw FullStack();
    else
        items[++this->top] = data;
}

template <class T>
void stack<T>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    else
        this->top--;
}

template <class T>
T stack<T>::Top()
{
    if (IsEmpty())
        throw EmptyStack();

    return items[this->top];
}
