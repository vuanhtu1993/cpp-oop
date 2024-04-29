#include <iostream>
#include <typeinfo>
using namespace std;

class InventoryItem
{
private:
    /* data */
    string description;
    double cost;
    int units;
    string checkDescription(string des) {
        if(des.length() < 10) throw "Description length errors";
        return des;
    }

public:
    InventoryItem() : description(""), cost(0), units(0){};
    InventoryItem(string, double, int);
    string getDescription();
    double getCost(){
        return cost;
    };
    int getUnits() {
        return units;
    };
    ~InventoryItem();
};

InventoryItem::InventoryItem(string description, double cost, int units)
{
    this->description = checkDescription(description);
    this->cost = cost;
    this->units = units;
}



string InventoryItem::getDescription() {
    return description;
}

InventoryItem::~InventoryItem()
{
    // cout << "Destructoring!!!" << endl;
}
