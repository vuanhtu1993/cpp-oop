#include <iostream>
#include <iomanip>
using namespace std;

class Inventory
{
private:
    string description;
    double cost;
    int units;

public:
    Inventory() : description(""), cost(0), units(0){};
    Inventory(string desc) : description(desc), cost(0), units(0){};
    Inventory(string desc, double cost, int inits)
    {
        this->description = desc;
        this->cost = cost;
        this->units = units;
    }
};

int main()
{

    return 0;
}