#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    int one = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (one == 0)
        {
            if (s[i] == '1')
            {
                one = 1;
                zero = 0;
            }
        }

        if (one == 1)
        {

            if (zero == 0)
            {

                if (s[i] == '0')
                {
                    cnt++;
                    zero = 1;
                    one = 0;
                }
            }
        }
    }
    cout << cnt << nl;

    return 0;
}