#include "linkedList.h"
#include <iostream>
using namespace std;

template <typename T>
linkedList<T>::linkedList()
{
    this->head = NULL;
}

template <typename T>
linkedList<T>::~linkedList()
{
    this->head = NULL;
}

template <typename T>
void linkedList<T>::insertAtHead(T data)
{
    node<T> *newNode = new node<T>(data);
    newNode->next = head;
    head = newNode;
}

template <typename T>
void linkedList<T>::insertAtTail(T data)
{
    node<T> *newNode = new node<T>(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        node<T> *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

template <typename T>
void linkedList<T>::print()
{
    if (head == NULL)
        cout << "List is empty." << endl;
    else
    {
        node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

template <typename T>
void linkedList<T>::reverse()
{
    node<T> *prevPtr = NULL;
    node<T> *currPtr = head;
    node<T> *nextPtr;
    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    this->head = prevPtr;
}

template <typename T>
bool linkedList<T>::search(T key)
{
    if (head == NULL)
        cout << "List is empty." << endl;
    else
    {
        node<T> *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
                return true;

            temp = temp->next;
        }
        return false;
    }
}