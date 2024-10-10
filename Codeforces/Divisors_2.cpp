#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
int d[N + 9];
bool p[N + 9];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ans;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            d[j]++;
        }
    }
    for (int n = 1; n <= N; n++)
    {
        p[n] = true;
    }

    for (int m = 1; m <= N; m++)
    {
        for (int n = m; n <= N; n += m)
        {
            if (d[n] % d[m] != 0)
            {
                p[n] = false;
            }
        }
    }
    for (int n = 1; n <= N; n++)
    {
        if (d[n] > 3 and p[n])
        {
            ans.push_back(n);
        }
    }
    for (int i = 107; i < ans.size(); i += 108)
    {
        cout << ans[i] << '\n';
    }
    return 0;
}