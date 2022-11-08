#include "stack.cpp"
#include <iostream>
using namespace std;

template <class T>
void PrintStack(stack<T> s)
{
    stack<T> temp;
    while (!s.IsEmpty())
    {
        temp.Push(s.Top());
        cout << s.Top() << " ";
        s.Pop();
    }
    cout << endl;
    while (!temp.IsEmpty())
    {
        s.Push(temp.Top());
        temp.Pop();
    }
}

template <class T>
void ReversePrintStack(stack<T> s)
{
    stack<T> temp;
    while (!s.IsEmpty())
    {
        temp.Push(s.Top());
        s.Pop();
    }
    while (!temp.IsEmpty())
    {
        s.Push(temp.Top());
        cout << temp.Top() << " ";
        temp.Pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.Push(1);
    st.Push(2);
    st.Push(5);
    st.Push(3);
    PrintStack(st);
    cout << st.Top() << endl;
    ReversePrintStack(st);
    return 0;
}