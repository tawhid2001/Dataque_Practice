// printing array in reverse
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int arr[5] = {2, 4, 5, 6, 7};
//     int *ptr=arr;
//     for (int i = 4; i >= 0; i--)
//     {
//         cout << i << "index element " << *(ptr + i) << endl;
//     }

//     return 0;
// }

// reversing array

#include <iostream>
using namespace std;

void swap(int *ptr, int *ptr2)
{
    int temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int arr[5] = {2, 4, 5, 6, 7};
    int n = 5-1;
    int *ptr = arr;
    for (int i = 0; i < 5 / 2; i++)
    {
        swap((ptr + i), (ptr + n));
        n--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << i << "index element " << *(ptr + i) << endl;
    }

    return 0;
}