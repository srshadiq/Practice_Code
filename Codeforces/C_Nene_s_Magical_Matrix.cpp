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
        int n, k, l;
        cin >> n;
        k = (n * (n + 1)) / 2;
        int flag;
        ll sum = 0, m = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += i * (i + (i - 1));
        }

        m = n * (n + 1) / 2;
        cout << sum << " " << m << endl;

        int check = 0;

        int cnt = 0;
        int flagg = 0;
        int sss = n;
        for (int i = 1; i <= m; i++)
        {
            cnt++;
            if (cnt <= n)
            {
                if (flagg == 0)
                {
                    cout << 1 << " " << cnt << " ";
                    for (int j = 1; j <= sss; j++)
                    {
                        cout << j << " ";
                    }
                    if (cnt == n)
                    {
                        cnt = 0;
                        n--;
                        flagg = 1;
                    }
                    cout << nl;
                }
                else if (flagg == 1)
                {
                    cout << 2 << " " << cnt << " ";
                    for (int j = 1; j <= sss; j++)
                    {
                        cout << j << " ";
                    }
                    if (cnt == n)
                    {
                        cnt = 0;
                        n--;
                        flagg = 0;
                    }
                    cout << nl;
                }
            }
        }
    }
    return 0;
}