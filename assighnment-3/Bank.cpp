#include "Bank.h"

#include <iostream>
using namespace std;

Bank::Bank()
{
    this->name = "";
    this->act_num = 0;
    this->balance = 0.0;
}

Bank ::Bank(string name, int act_num, float balance)
{
    this->name = name;
    this->act_num = act_num;
    this->balance = balance;
}

void Bank ::deposit(float balance)
{
    this->balance += balance;
    cout << "Successfully Deposited" << endl;
    cout << endl;
}

void Bank ::withdraw(float balance)
{
    this->balance -= balance;
    cout << "Successfully withdrawed" << endl;
    cout << endl;
}

void Bank::show_info()
{
    cout << "Accout Holder Name: " << this->name << endl;
    cout << "Accout Holder Number: " << this->act_num << endl;
    cout << "Accout Holder Balance: " << this->balance << endl;
}