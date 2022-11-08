#include <iostream>
#include <vector>
using namespace std;

template <class T>
void print(vector<T> &v)
{
    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout <<"->"<<v[i];
    }
    cout << endl;
}

int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << "->";
    // }
    // cout << endl;

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << "->";
    // }
    // cout << endl;

    // for (auto element : v)
    // {
    //     cout << element << "->";
    // }
    // cout << endl;

    // print(v);

    // vector<string> names;
    // names.push_back("Java");
    // names.push_back("Python");
    // names.push_back("C++");
    // print(names);

    vector<int> numbers(5,0);
    print(numbers);

    return 0;
}