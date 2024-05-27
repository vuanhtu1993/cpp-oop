#include <iostream>
using namespace std;

class Saiyan
{
private:
    int level;
    string skill;
    int health = 10;

public:
    Saiyan(){};
    Saiyan(string s, int l = 1) : level(l), skill(s){};
    void ban_chuong(Saiyan *other)
    {
        cout << skill << "*===========" << endl;
        (*other)--;
    }
    void operator++()
    {
        health++;
    }

    void operator++(int)
    {
        ++(*this);
    }

    void operator--()
    {
        health--;
    }

    void operator--(int)
    {
        --(*this);
    }

    void xuat()
    {
        cout << "Sieu saiyan: " << health << "|" << skill << endl;
    }
};

int main()
{
    Saiyan Songoku("Kamejoko");
    Saiyan Cadic("Galick gun");
    Saiyan *Me;
    Saiyan &You = Cadic;
    // Me = &Songoku;
    // (*Me).ban_chuong(&Cadic);
    // (*Me).xuat();
    // Cadic.xuat();
    cout << &You << endl;
    return 0;
}
