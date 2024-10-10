#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i * i;
    }

    int cnt = 0;
    cnt += n;

    for (int i = n; i > 0; i--)
    {
        ll square = i * i * 1LL;
        for (int j = n; j >= 1; j--)
        {
            if (square / j <= n and square % j == 0)
            {
                cnt++;
                // if(square/j==n){
                //     break;
                // }
            }
        }
    }
    cout << cnt << nl;

    return 0;
}