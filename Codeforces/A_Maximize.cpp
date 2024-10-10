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
        int x;
        int ans = -1000;
        int result = -1000;
        cin >> x;

        for (int i = 1; i < x; i++)
        {
            int y = __gcd(i, x);
            if (y + i >= ans)
            {
                ans = y;
                result = i;
            }
        }
        cout << result << nl;
    }
    return 0;
}