#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    long m = 1;
    for (int i = 0; i < n; i++)
    {
        m *= a[i];
    }
    long x = 0;
    for (int i = 0; i < n; i++)
    {
        int M = m / a[i];
        int k = M % a[i];
        int y;
        for (int j = 1; j <= 50; j++)
        {
            if ((k * j) % a[i] == 1)
            {
                y = j;
                break;
            }
        }
        x += b[i] * y * M;
    }
    cout << x % m << endl;
    return 0;
}