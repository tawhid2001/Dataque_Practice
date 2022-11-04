#include <iostream>
using namespace std;

bool primeNumber(int x)
{
    bool flag = true;
    if(x==1)
    {
        cout<<"1 is a special number"<<endl;
    }
    for (int i = 2; i < x ; i++)
    {
        if (x % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}

int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    bool p = primeNumber(a);
    if (p == true)
        cout << "The number is  primenumber" << endl;
    else
        cout << "The number is not primenumber" << endl;
    return 0;
}
