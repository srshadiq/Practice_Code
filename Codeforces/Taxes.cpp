#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << nl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << nl;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << nl;
        }
        else
        {
            cout << 3 << nl;
        }
    }

    return 0;
}