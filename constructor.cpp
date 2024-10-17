#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Here there are two types of constuctors :
    // 1. Non-parametarized Constructor
    Teacher()
    {
        dept = "CSE";
    }

    // 2. Parametarized Constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

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
    Teacher t2("asit", "CSE", "C++", 30000);

    t1.name = "asit";
    t1.dept = "CSE";

    return 0;
}
