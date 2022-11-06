#include <iostream>
#include "Student.h"
using namespace std;


Student :: Student()
{
    this->name="";
    this->id=0;
    this->cgpa=0.0;
}

void Student :: set_data(string name, int id, float cgpa)
{
    this->name = name;
    this->id = id;
    this->cgpa = cgpa;
}

void Student::print_info()
{
    cout << "Name : " << this->name << endl;
    cout << "id : " << this->id << endl;
    cout << "cgpa : " << this->cgpa << endl;
    cout << endl;
}