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
        string a;
        ll b;
        cin >> a >> b;
        ll ans = 0;
        b = abs(b);
        // if(a[0] == '-'){
        //     a.erase(a.begin());
        // }
        if (a[0] == '-')
        {
            for (int i = 1; i < a.size(); i++)
            {
                ans = ((ans * 10LL) % b + (a[i] - '0')) % b;
            }
        }
        else
        {
            for (int i = 0; i < a.size(); i++)
            {
                ans = ((ans * 10LL) % b + (a[i] - '0')) % b;
            }
        }
        if (ans == 0)
        {
            cout << "Case " << ++cs << ": "
                 << "divisible" << nl;
        }
        else
        {
            cout << "Case " << ++cs << ": "
                 << "not divisible" << nl;
        }
    }
    return 0;
}