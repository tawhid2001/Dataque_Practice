#include <iostream>
#include "studen.cpp"
using namespace std;


int main()
{
    int n;
    cout << "Enter Student Number: ";
    cin >> n;
    studen s[n];
    studen temp;

    for (int i = 0; i < n; i++)
    {
        s[i].set_data();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].get_data();
    }

    temp.highest_marks(s,n);

    return 0;
}


