#include <iostream>
using namespace std;

int main()
{
    char c;
    int t;
    cout << "Enter a character: ";
    cin >> c;

    t = ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 2;

    switch (t)
    {
    case 1:
        cout << "Alphabet";
        break;
    case 2:
        cout << "Not Alphabet";
        break;
    default:
        cout << "Invalid input!!!";
        break;
    }

    return 0;
}