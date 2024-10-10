#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

const int N = 1e6 + 9;
double p[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i < N; i++)
    {
        p[i] = p[i - 1] + log2(i);
    }
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n, base;
        cin >> n >> base;
        double ans = 0;
        ans = p[n];
        ans /= log2(base);
        cout << "Case " << ++cs << ": " << (int)floor(ans + 1) << nl;
    }

    return 0;
}