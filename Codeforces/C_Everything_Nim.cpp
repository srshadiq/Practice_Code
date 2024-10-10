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
        int n;
        cin >> n;
        int a[n + 9];
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        // sort(a,a+n);
        // int k=a[0];
        // int b[n+9];
        // b[0]=0;
        // for (int i = 1; i < n; i++)
        // {
        //     b[i]-=a[i-1];44
        // }
        if (st.size() % 2 == 1)
        {
            cout << "Alice" << nl;
        }
        else
        {
            cout << "Bob" << nl;
        }
    }
    return 0;
}