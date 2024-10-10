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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int flag = 0;
        for (int i = 0; i < min(n, 22); i++)
        {
            bool erase = false;
            for (int j = i + 2; j >= 2; j--)
            {
                if (v[i] % j != 0)
                {
                    erase = true;
                }
            }
            if (!erase)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
    return 0;
}