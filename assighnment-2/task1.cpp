#include <iostream>
using namespace std;

int main()
{
    int *p, x;
    x = 5;
    p = &x;
    int **ptr;
    ptr = &p;
    int ***ptr2;
    ptr2 = &ptr;
    cout << "p=&x\nptr=&p\nptr2=&ptr\n"
         << endl;
    cout << "Value of x = " << x << endl;
    cout << "Address of x (&x)= " << &x << endl;
    cout << "Address of x (p) = " << p << endl;
    cout << "Value of p (*p)= " << *p << endl;
    cout << "Address of p (&p)= " << &p << endl;
    cout << "Address of p (ptr)= " << ptr << "\n"
         << endl;
    cout << "Value of ptr (*ptr)= " << *ptr << endl;
    cout << "Value of ptr *(*ptr)= " << **ptr << endl;
    cout << "Address of ptr (&ptr)= " << &ptr << endl;
    cout << "Address of ptr (ptr2)= " << ptr2 << "\n"
         << endl;
    cout << "Value of ptr2 (*ptr2)= " << *ptr2 << endl;
    cout << "Value of ptr2 *(*ptr2)= " << **ptr2 << endl;
    cout << "Value of ptr2 *(*(*ptr2))= " << ***ptr2 << endl;
    cout << "Address of ptr2 (&ptr2)= " << &ptr2 << endl;

    *p=6;
    cout << "Value of x (*p)= " << *p << endl;
    cout << "Value of x = " << x << endl;
    **ptr=7;
    cout << "Value of x (**ptr)= " << **ptr << endl;
    cout << "Value of x = " << x << endl;
    ***ptr2=8;
    cout << "Value of x (***ptr)= " << ***ptr2 << endl;
    cout << "Value of x = " << x << endl;

    return 0;
}