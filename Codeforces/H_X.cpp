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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 9];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < m)
            {
                continue;
            }
            if (a[i] % m == 0)
            {
                sum += (a[i] / m);
            }
            else if (a[i] % m != 0)
            {
                if (a[i] % m >= k)
                {
                    sum += a[i] / m;
                }
                else
                {
                    a[i] -= k;
                    if (a[i] > 0)
                    {
                        sum += ((a[i] / m));
                    }
                }
            }

            // cout << i << " " << sum << nl;
        }
        cout << sum << nl;
    }
    return 0;
}