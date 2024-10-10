#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        gcd = __gcd(gcd, a[n - 1] - a[i]);
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (a[n - 1] - a[i]) / gcd;
    }

    cout << sum << " " << gcd << nl;

    return 0;
}