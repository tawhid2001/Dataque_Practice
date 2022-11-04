#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"---->Sum of n^n th series<----"<<endl;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, i);
        cout << i << "^" << i << " + ";
    }

    cout<< "= " << sum;

    return 0;
}