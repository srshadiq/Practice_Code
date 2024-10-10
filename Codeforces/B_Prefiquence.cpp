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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        ll cnt = 0;
        int i = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cnt++;
                i++;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}