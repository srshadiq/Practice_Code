#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        cout << "Case " << ++cs << ": " << (m * n) / 2 << nl;
    }
    return 0;
}