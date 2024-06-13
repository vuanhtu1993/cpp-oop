#include <iostream>
#include "Employee.cpp"
using namespace std;

#pragma once
class Manager : public Employee
{
private:
    int bonus;

public:
    Manager(string name, int salary, int bonus) : Employee(name, salary)
    {
        this->bonus = bonus;
    }
    void setBonus(int b)
    {
        bonus = b;
    }
    int getBonus()
    {
        return bonus;
    }
    int getSalary()
    {
        return Employee::getSalary() + bonus;
    }
    void display()
    {
        cout << "Manager : " << getName() << " salary: " << getSalary() << endl;
    }
};