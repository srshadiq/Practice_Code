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
        int n, c, d;
        cin >> n >> c >> d;
        int a[n][n];
        map<int, int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cin >> a[i][j];
        //     }
        // }
        bool flag = true;

        vector<int> v, v2;
        for (int i = 0; i < n * n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        int x = v[0];
        int y = v[n * n - 1];
        int w = 0;

        for (int i = x;; i += d)
        {
            w++;
            if (w > n)
                break;
            int z = 0;
            for (int j = i;; j += c)
            {
                z++;
                if (z > n)
                    break;
                // mp[j]++;
                v2.push_back(j);
                // cout << j << " ";
            }
        }
        // cout << nl;
        sort(v2.begin(), v2.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != v2[i])
                flag = false;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (((a[i + 1][j]) != (a[i][j] + c)) or ((a[i][j + 1]) != (a[i][j] + d)))
        //         {
        //             flag = false;
        //         }
        //     }
        // }
        if (flag)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}