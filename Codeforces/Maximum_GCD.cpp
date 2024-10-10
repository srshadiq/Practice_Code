#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << __gcd(15, ) << nl;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            cout << (n - 1) / 2 << nl;
        }
        else
        {
            cout << (n) / 2 << '\n';
        }
    }

    return 0;
}