#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
const int N = 1e5 + 9;
int freq[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    int ans = 0;
    for (int i = 2; i <= N; i++)
    {
        int cnt = 0;
        for (int j = i; j <= N; j += i)
        {
            cnt += freq[j];
        }
        ans = max(ans, cnt);
    }
    cout << max(ans, 1) << nl;

    return 0;
}