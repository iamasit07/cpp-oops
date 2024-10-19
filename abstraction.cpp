#include <bits/stdc++.h>
using namespace std;

class Person
{
    // Abstraction can be done using these 3 access modifiers
protected:
    string address;

private:
    int aadharNo;

public:
    string name;
    string age;
};

// Abstraction can also be done using the abstract functions, for eg:
class Shapes
{
    // Creating only a virtual funtion in class makes the class an abstract class
    virtual void draw() = 0;
};

class Circle : public Shapes
{
public:
    void draw()
    {
        cout << "Drawing a Cirle" << endl;
    }
};

class Rectange : public Shapes
{
public:
    void draw()
    {
        cout << "Drawing a Rectange" << endl;
    }
};

int main()
{
    // Creating a class, we can easily access the public attributes
    Person p1;
    p1.name = "asit";
    p1.age = 21;

    // We cannot access the private attributes
    p1.aadharNo = 123456789;
    // We also cannot access the protected attributes
    p1.address = "Meerut";

    // We cannot make an abstract class directly it has to be inherited by another class to use its functions
    Shapes s1;
    s1.draw();

    // Other classes can use the funtions of abstract class using Inheritance
    Circle c1;
    c1.draw();

    Rectange r1;
    r1.draw();
    return 0;
}