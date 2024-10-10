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
        int n, d, x;
        cin >> n >> d;
        char dgt = d + '0';
        string s = "";
        int ans = 0;
        for (int i = 0; i <= s.size(); i++)
        {
            s += dgt;
            ans = (ans * 10LL % n - (s[i] - '0')) % n;
            if (ans == 0)
            {
                break;
            }
        }
        cout << "Case " << ++cs << ": " << s.size() << nl;
    }
    return 0;
}