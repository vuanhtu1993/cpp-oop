#include <iostream>
using namespace std;
#include "Animal.cpp"
#include "Cat.cpp"
#include "Dog.cpp"
#include "Duck.cpp"

int main()
{
    Animal *a[3] = {new Cat("Kitten"), new Dog("Puppy"), new Duck("Ducky")};
    for (int i = 0; i < 3; i++)
    {
        a[i]->speak();
    }
    return 0;
}