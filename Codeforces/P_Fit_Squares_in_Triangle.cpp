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
        int b;
        cin >> b;
        int cnt = 0;
        for (int i = 2; i <= b; i += 2)
        {
            int x = b - i;
            if (x >= 2)
            {
                cnt++;
            }
        }

        cout << (cnt * (cnt + 1)) / 2 << nl;
    }
    return 0;
}