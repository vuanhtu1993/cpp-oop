#include <iostream>
#include <fstream>
#include "Person.cpp"

struct Student
{
    string name;
    int age;
    Student(void);
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    fstream fs;
    fs.open("text.txt");

    int size = 4;
    Person *p = new Person[size];
    p[0] = Person("Truong", 20);
    p[1] = Person("Vu", 20);
    p[2] = Person("Son", 20);
    p[3] = Person("Tuan", 20);
    //  ========== Ghi file ============
    // for (int i = 0; i < size; i++)
    // {
    //     if (fs.is_open())
    //     {
    //         fs << p[i].getName() << endl;
    //         fs << p[i].getAge() << endl;
    //     }
    //     /* code */
    // }
    // ========= Đọc file =============
    for (int i = 0; i < size; i++)
    {
        string name;
        int age;
        if (fs.is_open())
        {
            getline(fs, name);
            fs >> age;
            fs.ignore();
        }
        p[i].setName(name);
        p[i].setAge(age);
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Person name: " << p[i].getName() << " age: " << p[i].getAge() << endl;
    }

    return 0;
}