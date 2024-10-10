#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const int mod = 100000007;
int gORe(vector<int> e, int t)
{
    int ans = 1;
    for (int i = 0; i < e.size(); i++)
    {
        ans = 1LL * ans * (e[i] / t + 1) % mod;
    }
    return ans;
}
int solve(vector<int> e, int t)
{
    return (gORe(e, t) - gORe(e, t + 1) + mod) % mod;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, t, cs = 0;
    while (cin >> n >> m >> t and n > 0)
    {
        vector<int> e;
        for (int i = 2; i * i <= n; i++)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            e.push_back(cnt * m);
        }
        if (n > 1)
            e.push_back(1 * m);
        cout << "Case " << ++cs << ": " << solve(e, t) << nl;
    }

    return 0;
}