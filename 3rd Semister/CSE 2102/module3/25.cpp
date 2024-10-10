#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter Number: ";
    cin >> x;
    int n = 1, f = 1;
    while ((n + 1) * f <= x)
    {
        n = n + 1;
        f = f * n;
    }
    int y = x;
    int a[100000];
    int k = n;
    while (n > 0)
    {
        a[n] = y / f;
        y = y - a[n] * f;
        f = f / n;
        n--;
    }
    for (int i = k; i >= 1; i--)
    {
        if (i != 1)
            cout << a[i] << "*" << (i) << "!+";
        else
            cout << a[i] << "*" << (i) << "!";
    }

    return 0;
}