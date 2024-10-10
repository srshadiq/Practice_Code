#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    cin >> x;
    ll ansA = 1e13, ansB = 1e13;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll a = i;
            ll b = x / i;
            ll lcm = (a * b) / (__gcd(a, b));
            if (lcm == x)
            {
                if (max(a, b) < max(ansA, ansB))
                {
                    ansA = a;
                    ansB = b;
                }
            }
        }
    }
    cout << ansA << " " << ansB << nl;

    return 0;
}