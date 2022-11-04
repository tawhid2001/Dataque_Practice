#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter 10 numbers: "<<endl;
    int i = 0;
    while (i < 10)
    {
        cin >> arr[i];
        i++;
    }

    cout << "Printing the inputs: "<<endl;

    i = 0;
    while (i < 10)
    {
        cout << arr[i] << " ";
        i++;
    }

    return 0;
}