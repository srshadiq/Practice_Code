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
        int mx = 0;
        for (int i = 2; i * i <= n; i++)
        {
            int p = 0;
            while (n % i == 0)
            {
                n = n / i;
                p++;
            }
            mx = max(mx, p);
        }
        cout << mx << "\n";
    }
    return 0;
}