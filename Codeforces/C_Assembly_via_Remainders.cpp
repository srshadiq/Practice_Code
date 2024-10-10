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
        ll x[n + 9];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x[i];
        }
        ll a[n + 9];
        a[0] = x[0] + 1;
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 1; j < 1000; j++)
            {
                int tmp = 1LL * a[i - 1] * j + x[i - 1];

                if (tmp > x[i])
                {
                    a[i] = tmp;
                    break;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << x[n - 2];

        cout << nl;
    }
    return 0;
}