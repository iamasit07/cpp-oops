#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Objects
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (auto i : arr)
        cout << i << '\n';
    return 0;
}