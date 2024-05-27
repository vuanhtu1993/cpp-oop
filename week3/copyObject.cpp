#include <iostream>
using namespace std;

class copyClass
{
private:
    int *p;

public:
    copyClass(int v = 0) : p(new int(v)){};
    copyClass(const copyClass &cp)
    {
        p = new int;
        *p = *cp.p;
    }
    int getInfo()
    {
        cout << p << endl;
        return *p;
    }
    ~copyClass()
    {
        delete p;
    };
};

int main()
{
    copyClass cp1(10), cp2(cp1);
    cout << "cp1: " << cp1.getInfo() << "|cp2: " << cp2.getInfo() << endl;
    return 0;
}