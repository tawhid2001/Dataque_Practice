#include <iostream>
using namespace std;

int *largest(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    int *p = &x, *pp = &y,*ptr=NULL;
    cout << "Enter 2 numbers: " << endl;
    cin >> *p >> *pp;
    ptr = largest(p, pp);
    cout << "Largest: " << *ptr << endl;
    return 0;
}