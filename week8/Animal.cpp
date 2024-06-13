#include <iostream>
using namespace std;

#pragma once
class Animal
{
private:
    string name;

public:
    Animal(void);
    Animal(string name) : name(name){};
    virtual void speak() = 0;
};