#include <iostream>
using namespace std;

class Emptystack
{
};

template <class T> class node
{
    public:
    T data;
    node* next;
    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class stack
{
private:
    node<T> *top;
    
public:
    stack();
    ~stack();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();
    void Print();
};
