#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int minPrimeFact(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }

    return n;
}
// template <typename T>
// using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int p = minPrimeFact(a[i]);
            v.push_back(p);
            st.insert(p);
        }
        set<int>::iterator it = st.begin();
        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }
        // for (int i = 0; i < st.size(); i++)
        // {
        //     cout << *it << " ";
        //     it++;
        // }
        cout << (6 * 13) / __gcd(6, 13) << nl;

        cout << nl;
    }
    return 0;
}