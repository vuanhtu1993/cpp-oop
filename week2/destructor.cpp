#include <iostream>
using namespace std;

class Destructor
{
private:
    /* data */

public:
    int *arr;
    int n;

    Destructor()
    {
        cout << "Constructor function call" << endl;
    };
    void set(int n)
    {
        this->n = n;
    }
    ~Destructor()
    {
        cout << "Destructor call" << endl;
    };
};

void someFunc1()
{
    Destructor a;
    a.n = 3;
    a.arr = new int[a.n];
    cout << a.arr << endl;
    // Some code
    // delete[] a.arr;
}

void someFunc2()
{
    Destructor a;
    a.n = 3;
    a.arr = new int[a.n];
    cout << a.arr << endl;
    // Some code
    // delete[] a.arr;
}
int main()
{
    // someFunc1();
    // someFunc2();
    Destructor des1;
    Destructor *des;
    des = &des1;
    des->set(10);
    cout << des->n;
    delete des;
    // delete des;
    return 0;
}