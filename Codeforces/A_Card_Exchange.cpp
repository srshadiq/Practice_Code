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
        int n, k;
        cin >> n >> k;
        int a[n + 9];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool flag = false;
        for (int i = 1; i <= 100; i++)
        {
            if (mp[i] >= k)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << k - 1 << nl;
        }
        else
        {
            cout << n << nl;
        }
    }

    return 0;
}