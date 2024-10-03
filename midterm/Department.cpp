#include <iostream>
#include <vector>
#pragma once
using namespace std;
#include "Employee.cpp"
#include "Manager.cpp"
#include <vector>
class Department
{
private:
    string name;
    Employee *manager;
    vector<Employee *> staffs;

public:
    Department(string name, Employee *manager) : manager(manager)
    {
        this->name = name;
    };
    vector<Employee *> getStaffs()
    {
        return staffs;
    }
    float getManagerBonus()
    {
        float bonus = 0;
        for (Employee *staff : staffs)
        {
            bonus += staff->getBonus() / 2;
        }
        return bonus;
    }

    void addStaff(Employee *e)
    {
        staffs.push_back(e);
    }
    void display()
    {
        cout << "Department " << name << endl;
        cout << "Manager:" << manager->getName() << "| Salary" << manager->getSalary() + getManagerBonus() << endl;
        // manager->display();
        for (Employee *staff : staffs)
        {
            staff->display();
        }
    }
};