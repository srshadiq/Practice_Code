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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        if (st.size() < 2)
        {
            cout << -1 << nl;
            continue;
        }
        int cnt = 0, ans = n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                cnt++;
            }
            else
            {
                ans = min(cnt, ans);
                cnt = 0;
            }
        }
        ans = min(cnt, ans);
        cout << ans << nl;
    }
    return 0;
}