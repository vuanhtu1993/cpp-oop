#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age){};
    friend istream &operator>>(istream &, Person &);
    friend ostream &operator<<(ostream &, Person &);
};

istream &operator>>(istream &in, Person &p)
{
    cout << "Nhap ten: " << endl;
    getline(in, p.name);
    cout << "Nhap tuoi: " << endl;
    in >> p.age;
    return in;
}

ostream &operator<<(ostream &out, Person &p)
{
    return out << "Anh/ Chi: " << p.name << " tuoi " << p.age << endl;
}

class Faculty
{
private:
    string name;
    Person &dean, &vice;

public:
    Faculty(string name, Person &dean, Person &vice) : name(name), dean(dean), vice(vice){};
    void print()
    {
        cout << "Khoa" << name << endl;
        cout << dean << endl;
        cout << vice << endl;
    }
};

int main()
{
    Person Tien("Thầy Tiến", 40), Cuong("Thầy Cường", 39);
    Faculty CNTT("CNTT", Tien, Cuong);
    CNTT.print();
    return 0;
}