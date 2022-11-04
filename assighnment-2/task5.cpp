#include <iostream>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int x, sum = 0;
    cout << "Enter x: " << endl;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        sum += factorial(i) / i;
        cout << i << "!/" << i << "+ ";
    }
    cout << "\n="<<sum;

    return 0;
}