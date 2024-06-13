#include <iostream>
using namespace std;
#include "Employee.cpp"
#include "SalePerson.cpp"
#include "Manager.cpp"
#include "Department.cpp"

int main()
{
    Employee *e;
    SalePerson s1("Sale1", 500, 100);
    SalePerson s2("Sale2", 300, 300);
    SalePerson s3("Sale3", 300, 100);
    Manager m("Manager1", 1500);
    m.addNhanvien(s1);
    m.addNhanvien(s2);
    m.addNhanvien(s3);
    Department CNTT("Khoa CNTT", m);
    CNTT.addEmployee(&s1);
    CNTT.display();
    return 0;
}