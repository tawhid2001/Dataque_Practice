#include <iostream>
#include "Bank.cpp"
using namespace std;

int main()
{
    Bank b1("Tawhid Talal", 211003042, 100000000);
    Bank b2("Mahadi Hasan", 211003043, 1000);
    Bank b3("Sheikh Rifat", 211003044, 10000);
    Bank b4("Safayer Sabbir", 211003045, 100090);
    b4.show_info();
    b4.deposit(90);
    b4.show_info();
    b4.withdraw(180);
    b4.show_info();
    return 0;
}