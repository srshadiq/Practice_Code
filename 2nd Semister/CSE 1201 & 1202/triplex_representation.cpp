#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][6], s[100][3];
    int k = 0, n = 5, m = 6, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            if (a[i][j] != 0)
            {
                k++;
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
            }
    }
    s[0][0] = n;
    s[0][1] = m;
    s[0][2] = k;
}