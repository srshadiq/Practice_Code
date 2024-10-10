#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> pr;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pr.push_back(make_pair(a, i));
    }
    sort(pr.begin(), pr.end());
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                ll sum = pr[i].first + pr[j].first + pr[k].first + pr[l].first + 0LL;
                if (sum == x)
                {
                    cout << pr[i].second << " " << pr[j].second << " " << pr[k].second << " " << pr[l].second;
                    return 0;
                }
                else if (sum > x)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}