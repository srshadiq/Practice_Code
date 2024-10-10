#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cout << "Enter number and base: ";
    cin >> n >> b;
    int a[n];
    int q = n;
    int k = 0;
    while (q != 0)
    {
        a[k] = q % b;
        q = q / b;
        k++;
    }
    cout << "The base " << b << " exponention of " << n << " is: ";
    for (int i = k - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    return 0;
}