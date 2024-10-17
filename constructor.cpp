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

    // 2.a Parametarized Constructor
    // Teacher(string n, string d, string s, double sal)
    // {
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }

    // 2.b Parametarized constructor (with This Keyword)
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Custom made Copy constructor
    Teacher(Teacher &orgObj)
    {
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
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

    Teacher t3(t2);
    Teacher t4(t2);

    return 0;
}
