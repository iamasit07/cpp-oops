#include <bits/stdc++.h>
using namespace std;

/*
There are in total of 3 types of Access Modifiers.
    1. Public (Data and Methods accessible inside class)
    2. Private (Data and Methods accessible to everyone)
    3. Protected (Data and Methods inside class and to its derived class)
*/

// Basic Template of a Class (A blueprint)

class Teacher
{
    // Private Access modifier make it impossible to access the salary outside the class
private:
    double salary;

    // Public access modifier make it easy to access the following attributes to everyone
public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{
    // Objects Created by using the class
    Teacher t1;
    Teacher t2;

    t1.name = "asit";
    t1.dept = "CSE";

    return 0;
}