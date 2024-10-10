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
        vector<int> v;
        int sq;
        for (int i = 0; i * 2 < n; i++)
        {
            v.push_back(n - i);
            if (n - i != i + 1)
            {
                v.push_back(i + 1);
            }
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << nl;
    }
    return 0;
}