#include <iostream>
#include <vector>
#pragma once
using namespace std;
#include "Employee.cpp"

class Manager : public Employee
{
private:
    float bonus;

public:
    Manager(string name, int salary) : Employee(name, salary){};
    float getBonus()
    {
    }
};