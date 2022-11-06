#include <iostream>
#include "Faculty.cpp"
using namespace std;

int main()
{
    Faculty f1;
    f1.about();
    Faculty f2("Tawhid Talal",211003042,"01399578444","Dhaka",17000,5.5);
    f2.about();
    f2.calculate_salary();

    Faculty f3;
    f3.set_info();
    f3.about();
    f3.calculate_salary();
    return 0;
}