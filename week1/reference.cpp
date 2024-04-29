#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
    int *p;
    static int count;

public:
    Rectangle(double, double);
    void set(double, double);
    void setP(int num) { *p = num; };
    void getInfo();
    void getCount();
};

int Rectangle::count = 0;

Rectangle::Rectangle(double w, double h)
{
    count += 1;
    this->width = w;
    this->height = h;
}

void Rectangle ::set(double w, double h)
{
    this->width = w;
    this->height = h;
}

void Rectangle::getInfo()
{
    cout << width << " " << height << " " << *p << endl;
}

void Rectangle::getCount()
{
    cout << count << endl;
}

int main()
{
    Rectangle r1(10.3, 5), r2 = r1;
    // r2.set(10.3, 4.5);
    r1.setP(10);
    r1.getInfo();
    r2.getInfo();
    // r1.getCount();
    return 0;
}