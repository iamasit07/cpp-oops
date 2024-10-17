#include <bits/stdc++.h>
using namespace std;

// Basic Template of a Class (A blueprint)
class Teacher
{
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