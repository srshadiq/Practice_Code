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
        int p[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        char c[n + 10];
        ;
        for (int i = 1; i <= n; i++)
        {
            cin >> c[i];
        }
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++)
        {
            ll cnt = 0;

            if (v[i] == 0)
            {

                int j = i;
                while (1)
                {
                    if (c[j] == '0')
                        cnt++;
                    v[j] = i;
                    if (p[j] == i)
                    {
                        break;
                    }
                    j = p[j];
                }

                v[i] = cnt;
            }
            else
            {
                v[i] = v[v[i]];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    return 0;
}