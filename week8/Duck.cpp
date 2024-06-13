#include <iostream>
using namespace std;
#include "Animal.cpp"

class Duck : public Animal
{
private:
    string name;

public:
    Duck(string name) : Animal(name){};
    void speak()
    {
        cout << "Quack quack" << endl;
    }
};