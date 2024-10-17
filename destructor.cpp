#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    ~Teacher()
    {
        cout << "Hi, Im distroy everything" << endl;
    }

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "dept : " << dept << endl;
        cout << "subject : " << subject << endl;
    }
};

int main()
{
    Teacher t1("asit", "CSE", "C++", 25000);
    t1.getInfo();

    return 0;
}
