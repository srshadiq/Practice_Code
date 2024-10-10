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
        string str;
        cin >> str;
        int visit[n + 9];
        bool flag = false;
        int s = sqrt(n);
        for (int i = 0; i < n; i++)
        {
            visit[i] = 0;
        }

        if (s * s == n)
        {
            for (int i = 0; i < s; i++)
            {
                visit[i] = 1;
                if (str[i] != '1')
                {
                    flag = true;
                    break;
                }
            }

            for (int i = n - 1; i >= n - s; i--)
            {
                visit[i] = 1;
                if (str[i] != '1')
                {
                    flag = true;
                    break;
                }
            }

            for (int i = 0; i < n; i += s)
            {
                visit[i] = 1;
                if (str[i] != '1')
                {
                    flag = true;
                    break;
                }
            }

            for (int i = s - 1; i < n; i += s)
            {
                visit[i] = 1;
                if (str[i] != '1')
                {
                    flag = true;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (visit[i] == 0)
                {
                    if (str[i] == '1')
                    {
                        flag = true;
                    }
                }
            }

            if (!flag)
            {
                cout << "Yes" << nl;
            }
            else
            {
                cout << "No" << nl;
            }
        }
        else
        {
            cout << "No" << nl;
        }
    }

    return 0;
}