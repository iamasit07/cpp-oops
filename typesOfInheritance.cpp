#include <bits/stdc++.h>
using namespace std;

// Parent class
class Person
{
public:
    string name;
    int age;
};

// Parent Class
class Teacher
{
public:
    string subject;
    double salary;
};

// Single Inheritance
class Student : public Person
{
public:
    int rollno;

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

// Multi-level Inheritance
class GrandStudent : public Student
{
public:
    int yearOfGraduation;
};

// Multiple Inheritance
class Ta : public Student, public Teacher
{
public:
    string department;
};

// Heirarchial Inheritance
// Here student and parent are at the same heirarchy because they inherit the same class at the same level
class Parent : public Person
{
public:
    string occupation;
};

int main()
{
    Student s1;
    s1.name = "asit";
    s1.age = 21;
    return 0;
}