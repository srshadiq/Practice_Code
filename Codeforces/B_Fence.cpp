#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int h[n + 7];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    ll sum = 0;
    ll j = 0, ans = 1e9 + 7;
    ll result;
    for (int i = 0; i < k; i++)
    {
        sum += h[i];
    }
    ans = sum;
    result = 0;

    for (int i = k; i < n; i++)
    {
        sum = sum + h[i] - h[i - k];
        if (sum < ans)
        {
            ans = sum;
            result = i - k + 1;
        }
    }
    cout << result + 1 << nl;

    return 0;
}