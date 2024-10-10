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
        ll d, n;
        cin >> d >> n;
        ll a[n];
        ll pre[n];
        map<int, int> mp;
        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        pre[0] = 0;
        mp[pre[0] % d]++;
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cnt += mp[pre[i] % d];
            mp[pre[i] % d]++;
        }
        cout << cnt << endl;
    }
    return 0;
}