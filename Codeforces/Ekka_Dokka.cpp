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
        unsigned long long w;
        cin >> w;
        if ((w & 1))
        {
            cout << "Case " << ++cs << ": "
                 << "Impossible" << nl;
        }

        else
        {
            unsigned long long m = 1;
            while (w % 2 == 0)
            {
                m *= 2;
                w /= 2;
            }
            cout << "Case " << ++cs << ": "
                 << w << " " << m << nl;
        }
    }
    return 0;
}