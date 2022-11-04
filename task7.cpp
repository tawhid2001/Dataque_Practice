#include <iostream>
using namespace std;

int main()
{
    int N,sum=0;
    cout<<">>>>Nth series sum<<<<"<<endl;
    cout << "Enter N: ";
    cin>>N;
    for (int i = 1; i <= N; i++)
    {
        sum+=i;
        cout << i <<" + ";
    }

    cout<< "= " << sum;
    
    return 0;
}