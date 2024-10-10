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
        ll n;
        cin >> n;
        vector<int> v, v2;
        unsigned long long tm = n;
        ll k = 1;
        while (tm > 0)
        {
            v.push_back(tm / 10);
            v2.push_back(k);
            k++;
            tm /= 10;
        }
        long long sum = 0;
        long long d = 1;
        for (int i = 1; i <= v.size(); i++)
        {
            if (i % 2 != 0)
            {
                if (i == v.size())
                {

                    sum += n;
                }
                else
                {
                    sum += 10 * d - 1;
                }
            }
            else
            {
                if (i == v.size())
                {
                }
                else
                {
                    sum -= d * 10 - 1;
                }
            }
            d *= 10;
            cout << sum << nl;
        }
        // cout << k << nl;
    }
    return 0;
}