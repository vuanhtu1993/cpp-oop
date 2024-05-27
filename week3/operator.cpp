#include <iostream>
using namespace std;

class Sinhvien
{
private:
    float gpa;
    string name;

public:
    void nhap(string name, float gpa)
    {
        this->name = name;
        this->gpa = gpa;
    }

    void xuat()
    {
        cout << "Name: " << name << "|" << "GPA: " << gpa << endl;
    }

    bool operator>(const Sinhvien &sv)
    {
        return this->gpa > sv.gpa;
    }

    bool operator<(Sinhvien sv)
    {
        return this->gpa < sv.gpa;
    }
};

class BankAccount
{
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b = 0) : name(n), balance(b){};
    // BankAccount(string n, double b) : name(n), balance(b){};
    double deposit(double money)
    {
        double total = balance + money;
        balance = total;
        return total;
    }

    double operator+(double money)
    {
        double total = balance + money;
        balance = total;
        return total;
    }
    void getInfo()
    {
        cout << "Bank Acount: " << name << "|" << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount ba1("BA1"), ba2("BA2", 100000);
    ba1.getInfo();
    ba2 + 1000;
    ba2.getInfo();
    return 0;
}