#include <bits/stdc++.h>
using namespace std;

// Function show is created
class Parent
{
public:
    void show()
    {
        cout << "Parent Class\n";
    }

    // Compile time Overriding Example : Function Overloading
    void getInfo()
    {
        cout << "Non-Parameterized Function" << endl;
    }

    void getInfo(string name)
    {
        cout << "name : " << name << endl;
        cout << "Parameterized Funtion" << endl;
    }
};

// Function show is overriden by the child class's show function
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class\n";
    }
};

int main()
{
    Parent p1;
    // Non-parameterized
    p1.getInfo();
    // Parameterized
    p1.getInfo("Asit");
    p1.show();

    Child c1;
    c1.show();
    return 0;
}