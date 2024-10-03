#include <iostream>
#include <fstream>
using namespace std;

template <class T>
T max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <class T>
class Stack
{
public:
    int size;
    int top;
    T *a;

private:
    Stack(int size) : size(size)
    {
        top = -1;
        a = new T[size]
    }

    bool isEmpty() const;
    void push(T);
};

template <class T>
bool Stack<T>::isEmpty() const
{
    return top == -1
}

template <class T>
void Stack<T>::push(T item)
{
    top++; 
    a[top] = item;
}

int main()
{
    return 0;
}