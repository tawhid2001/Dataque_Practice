#include <iostream>
using namespace std;

class Bank
{
private:
    int act_num;
    float balance;
    string name;

public:
    Bank();
    Bank(string, int, float);
    void deposit(float);
    void withdraw(float);
    void show_info();
};