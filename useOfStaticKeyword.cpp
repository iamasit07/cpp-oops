#include <bits/stdc++.h>
using namespace std;

void numericSeries()
{
    int x = 0;
    cout << "x : " << x << endl;

    x++;
}

void numericSeriesWithStatic()
{
    static int num = 0;
    cout << "number : " << num << endl;

    num++;
};

class Value
{
public:
    static int value;

    void increment()
    {
        value = value + 1;
    }
};

int main()
{

    Value v1;
    v1.value = 100;

    cout << v1.value << endl;
    v1.increment();
    cout << v1.value << endl;
    return 0;
}