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
        int n;
        cin >> n;
        int a[n + 9];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // cin>>a[i];
            mp[x]++;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 2)
            {
                cnt++;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}