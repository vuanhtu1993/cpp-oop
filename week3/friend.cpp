#include <iostream>
#include <ctime>
using namespace std;

class Sinhvien
{
private:
    string name;
    int age;
    float gpa;

public:
    Sinhvien(){};
    void nhap(string n, int a, float g)
    {
        name = n;
        age = a;
        gpa = g;
    }

    void in()
    {
        cout << name << " " << age << " " << gpa << endl;
    }
    // Friend function
    friend int getBirthYear(Sinhvien sv);
};

// #include <ctime>
int getBirthYear(Sinhvien sv)
{
    time_t t = time(0);
    tm *ltm = localtime(&t);
    int year = 1900 + ltm->tm_year;
    return year - sv.age;
};

int getCurrentYear()
{
    time_t t = time(0);
    tm *ltm = localtime(&t);
    int year = 1900 + ltm->tm_year;
    return year;
}

int main()
{
    Sinhvien sv;
    sv.nhap("tuva", 31, 3.2);
    sv.in();
    cout << getBirthYear(sv);
    return 0;
}