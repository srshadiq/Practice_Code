#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int stringToDecimal(string s)
{
    int decimal = 0;
    int base = 1;
    int n = s.size();
    if (s[n - 1] == '1')
    {
        decimal += base;
    }
    for (int i = s.size() - 2; i >= 0; i--)
    {
        base *= 2;
        if (s[i] == '1')
        {
            decimal += base;
        }
    }
    return decimal;
}

bool isSame(int a, int b, int c, int d, string s)
{
    string subs = s.substr(0, 8);
    if (a != stringToDecimal(subs))
    {
        return false;
    }

    subs = s.substr(9, 8);
    if (b != stringToDecimal(subs))
    {

        return false;
    }
    subs = s.substr(18, 8);
    if (c != stringToDecimal(subs))
    {
        return false;
    }
    subs = s.substr(27, 8);
    if (d != stringToDecimal(subs))
    {
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, cs = 0;
    cin >> t;
    while (t--)
    {

        char dot;
        int a, b, c, d;
        cin >> a >> dot >> b >> dot >> c >> dot >> d;
        string s;
        cin >> s;
        if (isSame(a, b, c, d, s))
        {
            cout << "Case " << ++cs << ": "
                 << "Yes" << nl;
        }
        else
        {
            cout << "Case " << ++cs << ": "
                 << "No" << nl;
        }
    }

    return 0;
}