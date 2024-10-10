#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
vector<string> st;
void permute(string &s, int l, int r)
{
    if (l == r)
    {
        st.push_back(s);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s.push_back(i + '0');
    }
    permute(s, 0, n - 1);
    sort(st.begin(), st.end());
    for (int i = 0; i < st.size(); i++)
    {
        string ans = st[i];
        for (int j = 0; j < n - 1; j++)
        {
            cout << ans[j] << ' ';
        }
        cout << ans[n - 1] << nl;
    }
    return 0;
}