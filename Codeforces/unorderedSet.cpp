#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // unordered_set<int> st;

    // st.insert(1);
    // st.insert(3);
    // st.insert(2);
    // st.insert(3);
    // st.insert(4);
    // st.insert(5);
    // st.insert(3);
    // st.insert(6);
    // for(auto x: st) cout<<x<<" ";
    unordered_map<int,int> ump;
    int a[]={1, 2, 3, 4, 5, 4 , 3, 2,1 , 1};
    for (int i = 0; i < 10; i++)
    {
        ump[a[i]]++;
    }
    cout<<ump.size()<<nl;
    cout<<ump[1]<<nl;
    ump.erase(a[0]);
    // ump[a[1]]--;
    // cout<<ump[1]<<nl;
    cout<<ump.size()<<nl;
    return 0;
}