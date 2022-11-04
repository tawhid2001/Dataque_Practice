#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "X=" << x << endl;
    cout << "y=" << y << endl;
}

int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    swap(x, y);
    //Doesn't swap the variables in call by value (copy the variable data)
    cout << "X=" << x << endl;
    cout << "y=" << y << endl;
    return 0;
}