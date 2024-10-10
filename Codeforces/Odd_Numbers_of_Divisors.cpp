#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

const int N = 1e5;
vector<ll> v[N];
ll devisor(ll n)
{
    ll ans = 1;
    if (n == 1)
    {
        return 1;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        ll p = 0;
        while (n % i == 0)
        {
            n /= i;
            p++;
        }
        ans *= (2 * p + 1);
    }
    if (n > 1)
    {
        ans *= 3;
    }
    return ans;
}
void findDevisor()
{
    for (ll i = 1; i * i <= 10000000000; i++)
    {
        ll div = devisor(i);
        v[div].push_back(1LL * i * i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    findDevisor();
    int t;
    cin >> t;
    while (t--)
    {
        ll k, low, high;
        cin >> k >> low >> high;
        int cnt = 0;
        cnt = upper_bound(v[k].begin(), v[k].end(), high) - lower_bound(v[k].begin(), v[k].end(), low);
        cout << cnt << nl;
    }
    return 0;
}