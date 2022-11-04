#include <iostream>
using namespace std;

int largestelement(int *ptr)
{
    int max = 0;
    for (int i = 1; i < 5; i++)
    {
        if (*(ptr + max) < *(ptr + i))
            max = i;
    }
    return *(ptr+max);
}

int main()
{
    int arr[5] = {5, 4, 10, 6, 8};
    int max=largestelement(arr);
    cout <<"Largest element in the array : "<< max <<endl;
    return 0;
}