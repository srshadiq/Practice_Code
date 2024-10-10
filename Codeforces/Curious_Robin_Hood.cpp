#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const int N = 1e5 + 9;
int a[N];
long long t[N * 4];
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void upd(int n, int b, int e, int i)
{
    if (i < b or e < i)
        return;
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    upd(l, b, mid, i);
    upd(r, mid + 1, e, i);
    t[n] = t[l] + t[r];
}
void upd2(int n, int b, int e, int i, int v)
{
    if (i < b or e < i)
        return;
    if (b == e)
    {
        t[n] += v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    upd2(l, b, mid, i, v);
    upd2(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

long long query(int n, int b, int e, int i, int j)
{
    if (e < i or j < b)
        return 0;
    if (b >= i and e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        build(1, 1, n);
        cout << "Case " << ++cs << ": " << nl;
        while (q--)
        {
            int in;
            cin >> in;
            if (in == 1)
            {
                int x;
                cin >> x;
                x++;
                cout << query(1, 1, n, x, x) << nl;
                upd(1, 1, n, x);
            }
            else if (in == 2)
            {
                int x, v;
                cin >> x >> v;
                ++x;
                upd2(1, 1, n, x, v);
            }
            else if (in == 3)
            {
                int x, y;
                cin >> x >> y;
                ++x, ++y;
                cout << query(1, 1, n, x, y) << nl;
            }
        }
    }
    return 0;
}