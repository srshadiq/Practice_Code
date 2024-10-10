#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cnt_a = 0, cnt_b = 0;
    cnt_a = n / a;
    cnt_b = n / b;
    ll lcm = (1LL * a * b) / __gcd(a, b);
    ll cnt_lcm = n / lcm;
    ll ans;
    ans = max(cnt_a * p + (cnt_b - cnt_lcm) * q, cnt_b * q + (cnt_a - cnt_lcm) * p);
    cout << ans << nl;
    return 0;
}