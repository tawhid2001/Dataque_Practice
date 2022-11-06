#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int id;
    float cgpa;

public:
    Student();
    void set_data(string, int, float);
    void print_info();
};
