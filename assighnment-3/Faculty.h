#include <iostream>
using namespace std;

class Faculty
{
private:
    string Name;
    int ID;
    string phone;
    string Address;
    float per_hour_salary;
    float working_hour;

public:
    // Constractor
    Faculty();
    Faculty(string, int);
    Faculty(string, int, string, string, float, float);
    // getter_setter
    void set_info();
    // functions
    void about();
    void calculate_salary();
};
