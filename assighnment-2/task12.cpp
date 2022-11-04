#include <iostream>
#include <string.h>
using namespace std;

// printing string in reverse
//  int main()
//  {
//      char str[]="Tawhid Talal";
//      char *ptr=str;

//     for (int i = strlen(str); i >= 0; i--)
//     {
//         cout << *(ptr+i);
//     }

//     return 0;
// }

// reversing string

void swap(char *ptr, char *ptr2)
{
    char temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}

int main()
{
    char str[] = "Tawhid Talal";
    char *ptr = str;
    char i = 0;
    char j = strlen(str) - 1;
    while (i<j)
    {
        swap((ptr + i), (ptr + j));
        i++;
        j--;
    }
    //printing reversed string
    int k=0;
    while (*(ptr+k) != '\0')
    {
        cout << *(ptr+k);
        k++;
    }
    
    return 0;
}
