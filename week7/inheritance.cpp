#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    string age;
    string address;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setAdress(string address)
    {
        this->address = address;
    }
    void print()
    {
        cout << "Person: " << name << " | " << age << " | " << address << endl;
    }
};

class Student : public Person
{
private:
    float gpa;

public:
    void setGPA(float gpa)
    {
        this->gpa = gpa;
    }
};

class Teacher : public Person
{
private:
    int salary;

public:
    void setSalary(int salary)
    {
        this->salary = salary;
    }
};

class Base
{
private:
    string private_var;

protected:
    string protected_var;

public:
    string public_var;
    string getPVT()
    {
        return private_var;
    }
};

class Derived : public Base
{
public:
    Derived(){};
    Derived(string str)
    {
        private_var = str;
        protected_var = str;
    }
    string getProtected()
    {
        return protected_var;
    }
};

int main()
{
    Derived d1;
    cout << d1.getProt();
    // d1.name = "String";
    return 0;
}