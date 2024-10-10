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
        int n, a, b;
        cin >> n >> a >> b;
        int x = (b / 2);
        // cout << x << " ";

        if (x >= a)
        {
            cout << a * n << nl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << b * (n / 2) << nl;
            }
            else
            {
                cout << b * (n / 2) + a << nl;
            }
        }
    }
    return 0;
}