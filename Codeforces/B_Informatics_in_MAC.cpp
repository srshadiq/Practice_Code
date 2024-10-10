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
        vector<int> a(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        int mex = 0;
        for (auto x : st)
        {
            if (x != mex)
            {
                break;
            }
            mex++;
        }
        set<int> stt;
        int count = 0;
        int flag = 1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mex)
            {
                stt.insert(a[i]);
            }
            if (stt.size() >= mex)
            {
                count++;
                v.push_back(i);
                stt.clear();
            }
        }
        int x = 1, y = v[0];
        if (count <= 1)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << count << nl;
            int x = 1;
            for (int i = 0; i < v.size(); i++)
            {
                if (i == v.size() - 1)
                {
                    y = v[i] + 1;
                    cout << x << " " << n;
                    x = y + 1;
                    cout << nl;
                }
                else
                {
                    y = v[i] + 1;
                    cout << x << " " << y;
                    x = y + 1;
                    cout << nl;
                }
            }
        }
    }
    return 0;
}