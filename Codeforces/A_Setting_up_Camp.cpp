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
        int a, b, c;
        cin >> a >> b >> c;
        int x;
        x = b / 3;
        b = b % 3;
        int y = b + c;
        if (b > 0 and y < 3)
        {
            cout << -1 << nl;
        }
        else
        {
            int z = y / 3;
            y = y % 3;
            if (y == 0)
            {
                cout << a + z + x << nl;
            }
            else
            {
                cout << a + x + z + 1 << nl;
            }
        }
    }
    return 0;
}