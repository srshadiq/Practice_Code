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
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        int a[n + 9];
        int b[n + 9];
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        int mx = -1;
        vector<int> vc;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
            {
                mx = a[i];
                vc.push_back(i);
            }
        }
        ll sumS = 0;
        ll sumB = 0;
        sumB += a[pb];
        sumS += a[ps];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            pb = b[pb];
            sumB += a[pb];
            ps = b[ps];
            sumS += a[ps];
            cnt++;
            if (cnt == k - 1)
            {
                break;
            }
        }
        // if (sumB > sumS)
        // {
        //     cout << "Bodya" << nl;
        // }
        // else if (sumB < sumS)
        // {
        //     cout << "Sasha" << nl;
        // }
        // else
        // {
        //     cout << "Draw" << nl;
        // }
        cout << sumB << " " << sumS << nl;
    }
    return 0;
}