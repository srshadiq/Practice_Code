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
        int n, m;
        cin >> n >> m;
        char a[n + 9][m + 9];
        // vector<pair<int, int>> pW, pB;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                // if (a[i][j] == 'W')
                // {
                //     pW.push_back(make_pair(i, j));
                // }
                // if (a[i][j] == 'B')
                // {
                //     pB.push_back(make_pair(i, j));
                // }
            }
        }
        bool flag = false;
        // int fisrt=0;
        // for (int i = 0; i < n ; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         if(a[i][j]=='W'){
        //             if()
        //             pr.push_back(make_pair(i,j));
        //         }
        //     }

        // }
        int left = 0, right = 0, top = 0, buttom = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == 'W')
            {
                left = 1;
            }
            if (a[i][m - 1] == 'W')
            {
                right = 1;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] == 'W')
            {
                top = 1;
            }
            if (a[n - 1][i] == 'W')
            {
                buttom = 1;
            }
        }
        if (left == 1 && right == 1 && top == 1 && buttom == 1)
        {
            flag = true;
        }
        left = 0;
        right = 0;
        top = 0;
        buttom = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == 'B')
            {
                left = 1;
            }
            if (a[i][m - 1] == 'B')
            {
                right = 1;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] == 'B')
            {
                top = 1;
            }
            if (a[n - 1][i] == 'B')
            {
                buttom = 1;
            }
        }
        if (left == 1 && right == 1 && top == 1 && buttom == 1)
        {
            flag = true;
        }
        if (flag)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << a[i][j];
        //     }
        //     cout << nl;
        // }
    }
    return 0;
}