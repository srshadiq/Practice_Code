#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int XOR1 = 0;
int XOR2 = 0;

int a[10000007];
int b[10000007];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 1000000; i++)
    {
        XOR1 ^= i;
        a[i] = XOR1;
    }
    for (int i = 1000000; i >= 1; i--)
    {

        XOR2 ^= i;
        b[i] = XOR2;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                if (i % 2 != 0)
                {
                    cout << "Fluttershy" << nl;
                    flag = 1;
                }
                else
                {
                    cout << "Pinkie Pie" << nl;
                    flag = 1;
                }
                break;
            }
            if (b[i] == 0)
            {
                if (i % 2 != 0)
                {
                    cout << "Pinkie Pie" << nl;
                    flag = 1;
                }
                else
                {
                    cout << "Fluttershy" << nl;
                    flag = 1;
                }
                break;
            }
        }
        if (flag == 0)
        {
            if (n % 2 == 0)
            {
                cout << "Fluttershy" << nl;
            }
        }
        else
        {
            cout << "Pinkie Pie" << nl;
        }
    }
    return 0;
}