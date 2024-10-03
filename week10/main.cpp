// Làm việc với file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    double a[] = {1.1, 1.2};
    cout << a << endl;
    file.open("content.txt", ios::binary);
    cout << ios::eofbit << ios::failbit << ios::goodbit << ios::badbit << endl;
    if (file.rdstate() & ios::badbit)
    {
    }

    if (file.is_open())
    {
        file << 10;
    }
    else
    {
        cout << "Khong the moi file" << endl;
    }

    file.close();
    return 0;
}