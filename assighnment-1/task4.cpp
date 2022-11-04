#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    if (num1 == num2)
        cout << "The sum: " << sum * 3 << endl;
    else
        cout << "The sum: " << sum * 4 << endl;
    return 0;
}