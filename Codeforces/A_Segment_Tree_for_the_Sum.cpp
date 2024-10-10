#include <bits/stdc++.h>
using namespace std;

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

void upd(int n, int b, int e, int i, int v)
{
    if (i < b or e < i)
        return;
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    upd(l, b, mid, i, v);
    upd(r, mid + 1, e, i, v);
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

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);
    while (q--)
    {
        int ty;
        cin >> ty;
        if (ty == 1)
        {
            int i, v;
            cin >> i >> v;
            ++i;
            // a[i] = v;
            upd(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            --r;
            ++l;
            ++r;
            long long ans = query(1, 1, n, l, r);
            cout << ans << '\n';
        }
    }
    return 0;
}