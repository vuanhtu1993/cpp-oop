#include <iostream>
using namespace std;
#include "Animal.cpp"

class Cat : public Animal
{
private:
    string name;

public:
    Cat(string name) : Animal(name){};
    // void speak()
    // {
    //     cout << "Meow meow" << endl;
    // }
};