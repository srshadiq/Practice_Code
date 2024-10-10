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
        int l, r;
        cin >> l >> r;
        ll ans = l;
        ll cnt = 0;
        for (int i = 1; i <= r; i++)
        {
            ans += i;
            cnt++;
            if (ans > r)
            {
                break;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}