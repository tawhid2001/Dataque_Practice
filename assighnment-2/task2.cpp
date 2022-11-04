#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int *p = &x, *pp = &y;
    cout << "Enter 2 numbers: " << endl;
    cin >> *p >> *pp;

    cout << "Sum = " << *p + *pp << endl;

    return 0;
}