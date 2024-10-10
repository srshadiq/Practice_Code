#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
ll bigGCD(int a, string b)
{
    ll ans = 0;
    for (int i = 0; i < b.size(); i++)
    {
        ans = (ans * 1LL * 10 + b[i] - '0') % a;
    }

    return gcd(a, ans);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    string b;
    cin >> a >> b;
    cout << bigGCD(a, b) << nl;

    return 0;
}