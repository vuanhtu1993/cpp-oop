#include <iostream>
using namespace std;

class Room
{
private:
    /* data */
    string name;
    float width;
    float height;

public:
    static int count;
    Room()
    {
        count += 1;
    };
    Room(string name, float width, float height) : name(name), width(width), height(height)
    {
        count += 1;
    };
    friend istream &operator>>(istream &, Room &);
    friend ostream &operator<<(ostream &, Room &);
    ~Room()
    {
        cout << "Room " << name << " was destructed" << endl;
    };
};

int Room::count = 0;

istream &operator>>(istream &in, Room &r)
{
    cout << "Nhập tên phòng: " << endl;
    in.ignore();
    getline(in, r.name);
    cout << "Nhập chiều rộng" << endl;
    in >> r.width;
    cout << "Nhập chiều dài" << endl;
    in >> r.height;
    return in;
}

ostream &operator<<(ostream &out, Room &r)
{
    return out << "Phòng: " << r.name << endl;
}

// const int n = 4;
class House
{
private:
    Room rooms[2];

public:
    House()
    {
        for (int i = 0; i < 2; i++)
        {
            cin >> rooms[i];
        }
    }
    void getRooms()
    {
        for (Room r : rooms)
        {
            cout << r << endl;
        }
    }
};

int main()
{
    House h1;
    // cout << "Hello world";
    cout << "So phong:" << Room::count << endl;
    h1.getRooms();
    return 0;
}