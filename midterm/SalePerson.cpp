#include <iostream>
#include <vector>
using namespace std;
#pragma once
#include "Employee.cpp"

class Saleperson : public Employee
{
private:
    float bonus;
    int sale;
    float commission_rate;
public:
    Saleperson(string name, int salary, int sale, float commission_rate = 0.1) : Employee(name, salary){
        this->sale = sale;
        this->commission_rate = commission_rate;
    };
    void setSale(int sale) {
        this->sale = sale;
    }
    void setCommissionRate(float cr) {
        commission_rate = cr;
    }
    float getBonus() {
        return sale*commission_rate;
    }
    float getSalary() {
        return Employee::getSalary() + getBonus(); 
    }
};