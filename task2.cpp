#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
    cout << "Sub of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
    cout << "Mul of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    cout << "Div of " << num1 << " and " << num2 << " is " << float(num1) / num2 << endl;
    return 0;
}