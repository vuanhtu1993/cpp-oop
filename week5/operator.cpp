#include <iostream>
using namespace std;

class Sinhvien
{
private:
    int age;
    string name;

public:
    Sinhvien(){};
    istream &operator>>(istream &in)
    {
        cout << "Nhập vào tên: ";
        // in.ignore();
        getline(in, name);
        cout << "Nhập tuổi: ";
        cin >> age;
        return in;
    };
    ostream &operator<<(ostream &out)
    {
        cout << "Sinh vien: " << name << "|" << age << endl;
        return out;
    }
    // friend istream &operator>>(istream &in, Sinhvien &sv);
    // friend ostream &operator<<(ostream &out, Sinhvien &sv);
};

// istream &operator>>(istream &in, Sinhvien &sv)
// {
//     cout << "Nhập tên sv: ";
//     getline(in, sv.name);
//     // in.ignore();
//     cout << "Nhập tuổi sv: ";
//     in >> sv.age;
//     return in;
// }

// ostream &operator<<(ostream &out, Sinhvien &sv)
// {
//     cout << "Sinh viên: " << sv.name << "|" << sv.age << endl;
//     return out;
// }

int main()
{
    Sinhvien sv1;
    // cin >> sv1;
    // cout << sv1;
    sv1 >> cin;
    sv1 << cout;
    return 0;
}