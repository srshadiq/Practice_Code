#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int findTailingZeros(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n / 5;
        n /= 5;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        int l = 1, r = 5 * q, ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int zeros = findTailingZeros(mid);
            if (zeros == q)
            {
                ans = mid;
                r = mid - 1;
            }
            else if (zeros > q)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << "Case " << ++cs << ": ";
        if (ans == -1)
        {
            cout << "impossible" << nl;
        }
        else
        {
            cout << ans << nl;
        }
    }
    return 0;
}