#include <iostream>
#include <string.h>
using namespace std;

struct student
{
    string name="tawhid";
    int age=22;
    float salary=220000;
};

int main()
{
    student *ptr,p;
    ptr=&p;
    cout << "Enter Student name: "<<endl;
    getline(cin,ptr->name);
    cout << "Enter Student age: "<<endl;
    cin >> ptr->age;
    cout << "Enter Student salary: "<<endl;
    cin >> ptr->salary;


    cout << "Name: "<<ptr->name<<endl;
    cout << "Age: "<<ptr->age<<endl;
    cout << "Salary: "<<ptr->salary<<endl;

    return 0;
}