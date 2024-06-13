#include <iostream>
#include <fstream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(){};
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};