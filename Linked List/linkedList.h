#include <iostream>
using namespace std;

template <typename T>
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

template <typename T>
class linkedList
{
private:
    node<T> *head;

public:
    linkedList();
    ~linkedList();
    void insertAtHead(T);
    void insertAtTail(T);
    void print();
    void reverse();
    bool search(T);
};
