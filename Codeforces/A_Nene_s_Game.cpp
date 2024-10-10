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
        int k, q;
        cin >> k >> q;
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            if (x < a[0])
            {
                cout << x << " ";
            }
            else if (x >= a[0])
            {
                cout << a[0] - 1 << " ";
            }
        }
        cout << nl;
    }
    return 0;
}