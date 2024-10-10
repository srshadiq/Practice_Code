#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += 1LL * a[i] * (n - (2 * i) - 1);
        }
        cout << "Case " << ++cs << ":\n";
        while (q--)
        {
            int k;
            cin >> k;
            if (k == 1)
            {
                cout << sum << nl;
            }
            else
            {
                int i, x;
                cin >> i >> x;
                sum -= 1LL * a[i] * (n - (2 * i) - 1);
                a[i] = x;
                sum += 1LL * a[i] * (n - (2 * i) - 1);
            }
        }
    }
    return 0;
}