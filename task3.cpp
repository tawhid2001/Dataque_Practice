#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    cout << "Enter radius of the sphere: ";
    cin >> x;
    cout << "Volume: " << (4.0 / 3) * M_PI * pow(x, 3) << endl;

    cout << "Enter edge of the cube: ";
    cin >> x;
    cout << "Volume: " << pow(x, 3) << endl;
    return 0;
}