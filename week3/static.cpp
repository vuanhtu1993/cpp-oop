#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    static int numberStudents;
    Student(string name, int age) : name(name), age(age){};
};

int Student::numberStudents = 0;

class Math
{
private:
    /* data */
public:
    static float const PI = 3.14;
    static int max(int a, int b)
    {
        return a > b ? a : b;
    }
    static int min(int a, int b)
    {
        return a > b ? b : a;
    }
    static float perimeterCircle(float d)
    {
        return PI * d;
    }
};

int main()
{
    Student stu1("tuva", 31), stu2("thang", 28);
    stu1.numberStudents = 1;
    stu2.numberStudents = 2;
    cout << stu1.numberStudents << "|" << stu2.numberStudents << "|" << Student::numberStudents << endl;

    cout << "Max" << Math::max(10, 20) << endl;
    cout << "Min" << Math::min(10, 20) << endl;

    cout << "Chu vi" << Math::perimeterCircle(60) << endl;
}