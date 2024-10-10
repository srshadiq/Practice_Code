#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    cin >> x >> y;
    double A, B;
    A = y * log(x);
    B = x * log(y);
    if (A > B)
    {
        cout << ">" << nl;
    }
    else if (A < B)
    {
        cout << "<" << nl;
    }
    else
    {
        cout << "=" << nl;
    }
    return 0;
}