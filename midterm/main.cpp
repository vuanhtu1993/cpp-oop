#include <iostream>
#include <vector>
using namespace std;
#include "Department.cpp"
#include "Employee.cpp"
#include "Manager.cpp"
#include "Saleperson.cpp"

int main()
{
    Manager m1("Tuva", 1000);
    Saleperson s1("VanA", 200, 100), s2("TranC", 300, 200);
    Department MKT("Marketing", &m1);
    MKT.addStaff(&s1);
    MKT.addStaff(&s2);
    MKT.display();
    return 0;
}