#include <iostream>
#include <vector>
using namespace std;
#include "Employee.cpp"
#include "SalePerson.cpp"
#pragma once

class Manager : public Employee
{
private:
    // SalePerson *nhanvien;
    vector<SalePerson> nhanviens;

public:
    Manager(){};
    Manager(string name, int salary) : Employee(name, salary){};
    float getBonus()
    {
        float sum = 0;
        for (SalePerson s : nhanviens)
        {
            sum += s.getBonus();
        }
        return sum / 2;
    }
    void addNhanvien(SalePerson &nv)
    {
        nhanviens.push_back(nv);
    }
    friend ostream &operator<<(ostream &out, Manager &m)
    {
        return out << "Quản lý: " << m.getName() << " Lương " << m.getSalary() + m.getBonus() << endl;
    }
};