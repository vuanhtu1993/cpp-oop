#include <iostream>
using namespace std;

void x2(int n)
{
    n *= 2;
}

void x2_2(int &n)
{
    n *= 2;
}

void x2_3(int *n)
{
    *n *= 2;
}

int main()
{
    int a = 100;
    int *ptr = &a; // int * là kiểu dữ liệu tham chiếu
    x2_3(&a);
    cout << a << endl;

    return 0;
}