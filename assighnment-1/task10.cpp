#include <iostream>
using namespace std;

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "The factorial of " << n << "! = " << fact << endl;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    factorial(n);

    return 0;
}