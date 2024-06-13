#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int dob;

public:
    Person()
    {
        cout << "Person constructor is running!!!" << endl;
    };
    Person(string name, int dob)
    {
        this->name = name;
        this->dob = dob;
    }
    void setName(string n)
    {
        name = n;
    }
    void setDOB(int d)
    {
        dob = d;
    }
    string getName()
    {
        return name;
    }
    int getDob()
    {
        return dob;
    }
};

class Student : private Person
{
private:
    float gpa;

public:
    Student(string name, int dob, float gpa) : Person()
    {
        this->gpa = gpa;
    }
    float getGpa()
    {
        return gpa;
    }
};

int main()
{
    Student s("Hai", 1999, 8.8);
    // cout << "Name: " << s.getName() << endl;
    // cout << "Date of birth: " << s.getDob() << endl;
    cout << "GPA: " << s.getGpa() << endl;
    return 0;
}
