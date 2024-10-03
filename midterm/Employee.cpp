#include <iostream>
#include <vector>
using namespace std;
#pragma once

class Employee
{
private:
    string name;
    int salary;

public:
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary()
    {
        this->salary = salary;
    }
    string getName()
    {
        return name;
    }
    virtual float getSalary()
    {
        return salary;
    }
    virtual float getBonus() = 0;
    void display()
    {
        cout << "Employee: " << name << "| Salary: " << getSalary() << endl;
    }
};