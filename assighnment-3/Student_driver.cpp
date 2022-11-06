#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    string name;
    int id;
    float cgpa;
    Student s[5];

    s[0].set_data("Tawhid Talal",211003042,3.66);
    s[1].set_data("Mahadi Hasan",211011042,3.88);
    s[2].set_data("Sheikh Rifat",211018042,3.75);
    s[3].set_data("Ishanul Haque",20138902,4.0);
    s[4].set_data("Safayet Sabbir",2110030003,3.90);

    for (int i = 0; i < 5; i++)
    {
        s[i].print_info();
    }
    

    return 0;
}