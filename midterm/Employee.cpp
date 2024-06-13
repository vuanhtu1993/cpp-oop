#include <iostream>
using namespace std;
#pragma once
class Employee
{
private:
    /* data */
    string name;
    int salary;

public:
    Employee(){};
    Employee(string name, int salary) : name(name), salary(salary){};
    string getName()
    {
        return name;
    }
    virtual float getSalary()
    {
        return salary;
    }
    friend istream &operator>>(istream &, Employee &);
    friend ostream &operator<<(ostream &, Employee &);
};

istream &operator>>(istream &in, Employee &emp)
{
    cout << "Employee - Nhập tên nhân viên: " << endl;
    getline(in, emp.name);
    cout << "Nhập lương nhân viên: " << endl;
    in >> emp.salary;
    return in;
};

ostream &operator<<(ostream &out, Employee &emp)
{
    return out << "Employee - Nhân viên: " << emp.name << " Lương: " << emp.salary << endl;
}