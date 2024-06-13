#include <iostream>
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
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
    string getName()
    {
        return name;
    }
    void display()
    {
        cout << "Employee: " << name << " salary: " << salary << endl;
    }
};