#include <iostream>
#include <iomanip>
using namespace std;

void print(string name, int id, string department, string position)
{
    const int minW = 8;
    const int maxW = 16;
    cout << name << setw(minW) << id << setw(minW) << department << setw(16) << position << setw(minW) << endl;
}

int main()
{
    const int strWidth = 8;
    const int numWidth = 6;
    // print("abc", strWidth);
    // print("abc", strWidth);s
    // print("abc", strWidth);
    // print("abc", strWidth);
    // print("abc", strWidth);
    cout << "Name" << setw(16) << "ID" << setw(16) << "Department" << setw(16) << "Position" << endl;
    cout << "-------------------------------------------" << endl;
    print("Vũ Anh Tú", 10, "CNTT", "Lecturer");
    double r = ((double)rand());
    cout << r << endl;
    return 0;
}