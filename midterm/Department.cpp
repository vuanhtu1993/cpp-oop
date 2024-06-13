#include <iostream>
#include <vector>
using namespace std;
#include "Employee.cpp"
#include "SalePerson.cpp"
#include "Manager.cpp"
#pragma once

class Department
{
private:
    string name;
    Manager &manager;
    // Employee *staffs;
    vector<Employee *> staffs;
    int size = 0;

public:
    Department(string name, Manager &manager) : manager(manager)
    {
        this->name = name;
    }

    void addEmployee(Employee *e)
    {
        staffs.push_back(e);
    }

    void display()
    {
        for (Employee *staff : staffs)
        {
            /* code */
            cout << staff->getName() << "|" << staff->getSalary() << endl;
        }
    }
};