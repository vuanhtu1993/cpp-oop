#include <iostream>
using namespace std;
#include "Animal.cpp"

class Dog : public Animal
{
private:
    string name;

public:
    Dog(string name) : Animal(name){};
    void speak()
    {
        cout << "Woff woff" << endl;
    }
};