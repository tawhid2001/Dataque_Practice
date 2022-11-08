const int MAX_SIZE=5;

template<class T>
class stack
{
private:
    T items[MAX_SIZE];
    int top;
    
public:
    stack();
    bool IsFull();
    bool IsEmpty();
    void Push(T data);
    void Pop();
    T Top();
};

class FullStack
{
};

class EmptyStack
{
};

