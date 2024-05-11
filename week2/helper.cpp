#include <iostream>
using namespace std;
class NumberArray
{
private:
    int size;
    double *a;
    int check(int s)
    {
        if (s < 0)
        {
            cout << "Nhập số không hợp lệ" << endl;
            return 0;
        }
        else
        {
            return s;
        }
    }

public:
    NumberArray(int size)
    {
        this->size = check(size);
        this->a = new double[this->size];
    };
    int getSize()
    {
        return size;
    }
    ~NumberArray()
    {
        delete[] a;
    };
};

int main()
{
    NumberArray arr(-1);
    cout << arr.getSize() << "Size";
    return 0;
}