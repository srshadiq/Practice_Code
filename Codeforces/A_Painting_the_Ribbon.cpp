#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int x = ceil(n * 1.0 / m);
        // cout << x << " ";
        if (n - x <= k)
            cout << "NO" << nl;
        else
            cout << "YES" << nl;
    }
    return 0;
}