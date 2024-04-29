// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
struct Sinhvien
{
    string msv;
    string name;
    double gpa;
    string adress;
};

int main()
{
    Sinhvien sv;
    cin >> sv.msv;
    // cin >> sv.name;
    cin.ignore();
    getline(cin, sv.name);
    cin >> sv.gpa;
    cin >> sv.adress;
    cout << sv.name << sv.gpa << sv.adress << endl;
    return 0;
}