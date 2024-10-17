#include <bits/stdc++.h>
using namespace std;

// Parent class
class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

// Derived Class using ':' operator
class Student : public Person
// Here the 'public' is the mode of inheritance
{
public:
    int rollno;

    // the values are passed to the parent class constructor
    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

int main()
{
    Student s1("Asit", 21, 86);

    s1.getInfo();
    return 0;
}