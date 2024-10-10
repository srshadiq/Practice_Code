#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];
z int k = 0;

void Base(int n, int b)
{
    int q = n;
    while (q != 0)
    {
        a[k] = q % b;
        q = q / b;
        k++;
    }
}
int modularExponentiation(int b, int n, int m)
{
    int x = 1;
    int power = b % m;
    Base(n, 2);
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        if (a[i] == 1)
        {
            x = (x * power) % m;
        }
        power = (power * power) % m;
    }
    return x;
}

int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    int ans = modularExponentiation(a, b, m);
    cout << ans << endl;
    return 0;
}