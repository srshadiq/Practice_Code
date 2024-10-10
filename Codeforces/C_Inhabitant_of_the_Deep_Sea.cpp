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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        int o = 0, p = n - 1;
        while (k > 0 or o <= p)
        {
            // if (a[o] > k / 2 and a[p] < k / 2)
            //     break;
            if (a[o] <= a[p])
            {
                if (a[o] <= (floor)(k / 2))
                {
                    // cout << o << " " << p << endl;

                    cnt++;
                    k -= a[o];
                
                    a[p] -= a[o];
                    cout << o << " " << p << " " << k << endl;

                    o++;
                }
                else
                {
                    // k -= 2 * a[o] - 1;
                    // a[p] -= a[o];
                    // a[o]-=
                    // o++;
                    break;
                    // continue;
                }
            }
            else
            {
                if (a[p] <= k / 2)
                {
                    // cout << o << " " << p << " " << k << endl;
                    cnt++;
                    k -= a[p];
                    a[o] -= a[p];
                    p--;
                }
                else
                {
                    break;
                    // continue;
                    // p--;
                }
            }
        }
        cout << cnt << nl;
    }
    return 0;
}