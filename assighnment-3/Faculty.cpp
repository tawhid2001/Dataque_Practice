#include <iostream>
#include "Faculty.h"
using namespace std;

Faculty ::Faculty()
{
    this->Name = "";
    this->ID = 0;
    this->phone = "";
    this->Address = "";
    this->per_hour_salary = 0.0;
    this->working_hour = 0.0;
}


Faculty::Faculty(string name, int id, string phone, string Address, float per_hour_salary, float working_hour)
{
    this->Name = name;
    this->ID = id;
    this->phone = phone;
    this->Address = Address;
    this->per_hour_salary = per_hour_salary;
    this->working_hour = working_hour;
}

void Faculty ::set_info()
{
    cout << "Enter Faculty Name: " << endl;
    cin >> this->Name;
    cout << "Enter Faculty ID: " << endl;
    cin >> this->ID;
    cout << "Enter Faculty phone: " << endl;
    cin >> this->phone;
    cout << "Enter Faculty Address: " << endl;
    cin >> this->Address;
    cout << "Enter Faculty per_hour_salary: " << endl;
    cin >> this->per_hour_salary;
    cout << "Enter Faculty working_hour: " << endl;
    cin >> this->working_hour;
}

void Faculty::about()
{
    cout << "Faculty Name: " << this->Name << endl;
    cout << "Faculty ID: " << this->ID << endl;
    cout << "Faculty phone: " << this->phone << endl;
    cout << "Faculty Address: " << this->Address << endl;
    cout << "Faculty per_hour_salary: " << this->per_hour_salary << endl;
    cout << "Faculty working_hour: " << this->working_hour << endl;
    cout << endl;
}

void Faculty ::calculate_salary()
{
        cout <<"Salary of " <<this->Name<< ": "<<this->per_hour_salary * this->working_hour<<endl;
}