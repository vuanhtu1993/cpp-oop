#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    // Rectangle() {width: 10.5; height: 3.5;}
    // Rectangle() : width(10.5), height(3.5) {}
    Rectangle(double width, double height)
    {
        this->width = width;
        this->height = height;
    }
    void getInfo()
    {
        cout << "width:" << width << endl
             << "height:" << height << endl;
    }
};

int main()
{
    Rectangle rec(10, 3.6);
    rec.getInfo();
    return 0;
}