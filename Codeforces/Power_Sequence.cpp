#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const ll MAX = 2e14;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    ll ans = MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i < 1000000; i++)
    {
        ll sum = 0;
        vector<ll> v(n);
        v[0] = 1;
        for (int j = 1; j < n; j++)
        {
            v[j] = v[j - 1] * i;
        }
        if (v[n - 1] > MAX)
        {
            break;
        }
        for (int j = 0; j < n; j++)
        {
            sum += abs(a[j] - (ll)v[j]);
            if (sum > MAX)
            {
                break;
            }
        }
        ans = min(ans, sum);
    }
    cout << ans << "\n";

    return 0;
}