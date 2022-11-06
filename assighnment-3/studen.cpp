#include <iostream>
#include "studen.h"
using namespace std;

studen ::studen()
{
    this->name = "";
    this->id = 0;
    this->marks = 0.0;
}

void studen::set_data()
{
    cout << "Enter Name: ";
    cin>>this->name;
    cout << "Enter ID: ";
    cin >> this->id;
    cout << "Enter Marks: ";
    cin >> this->marks;
}

void studen::get_data()
{
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
    cout << "Marks: " << this->marks << endl;
    cout << endl;
}

void studen::highest_marks(studen *s1, int len)
{
        this->highest = s1[0].marks;
    for (int j = 1; j < len; j++)
    {
        if (this->highest <= s1[j].marks)
        {
            this->highest = s1[j].marks;
        }
    }
    cout << "The highest Marks: " << this->highest << endl;
}
