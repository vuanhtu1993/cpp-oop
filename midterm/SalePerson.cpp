#include <iostream>
using namespace std;
#include "Employee.cpp"
#pragma once

class SalePerson : public Employee
{
private:
    float commission_rate;
    int sales;

public:
    SalePerson(){};
    SalePerson(string name, int salary, int s, float c = 0.1) : Employee(name, salary)
    {
        this->commission_rate = c;
        this->sales = s;
    }
    float getBonus()
    {
        return commission_rate * sales;
    }

    float getSalary()
    {
        return Employee::getSalary() + getBonus();
    }
    friend ostream &operator<<(ostream &out, SalePerson &e)
    {
        return out << "Sale man: " << e.getName() << " Salary: " << e.getSalary() + e.getBonus() << endl;
    }
};