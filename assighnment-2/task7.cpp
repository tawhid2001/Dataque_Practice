#include <iostream>
using namespace std;

void scanArray(int *ptr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> *(ptr + i);
    }
}

void printArray(int *ptr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << i << " index element : " << *(ptr + i) << endl;
    }
}

int main()
{
    int arr[5];
    // scanArray(arr, 5);
    // printArray(arr, 5);
    int *ptr=arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << " index element : ";
        cin >> *(ptr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << i << " index element : " << *(ptr + i) << endl;
    }
    return 0;
}