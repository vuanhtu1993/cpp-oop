#include <iostream>
#include "inventoryItem.cpp";
#include <iomanip>;
// #include <typeinfo>;
using namespace std;

void printTable(string description, double cost, int units)
{
    cout << setw(14) << description << setw(8) << cost << setw(16) << units << endl;
}

int main()
{
    int n = 1;
    try
    {
        InventoryItem items[] = {
            InventoryItem("adasd", 10.5, 10),
        };
    }
    catch (const char *e)
    {
        cout << e << endl;
    }

    return 0;
}