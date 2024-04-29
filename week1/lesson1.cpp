
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world" << endl;
    int n;
    cout << "Nhập vào số n" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }

    for (int i : a)
    {
        /* code */
        cout << i;
    }

    return 0;
}