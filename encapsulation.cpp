#include <bits/stdc++.h>
using namespace std;

/*
    Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
    In OOPs, Encapsulation is defined as binding together the data and the functions that manipulate them.
*/

// Basic Template of a Class is an example of Encapsulation
class Teacher
{
    // The data present in the class itself if encapsuled and protected.
private:
    double salary;

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
