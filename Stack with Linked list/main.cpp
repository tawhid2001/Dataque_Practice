#include <iostream>
#include"stack.cpp"
using namespace std;

int main()
{
    stack<int> s;
    s.Push(1);
    s.Push(6);
    s.Push(13);
    s.Push(9);
    // s.Print();
    s.Pop();
    cout<<s.Top();
    // s.Print();
    return 0;
}