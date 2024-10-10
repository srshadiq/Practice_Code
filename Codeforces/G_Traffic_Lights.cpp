#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,n;
    cin>>x>>n;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        p.push_back(y);
    }
    set<pair<int,int>> stp;
    multiset<int> mst;

    stp.insert({0,x});
    mst.insert(x);

    for (int i = 0; i < n; i++)
    {
        auto it= stp.upper_bound({p[i],0});
        it--;

        ll start = it->first;
        ll end = it->second;

        stp.erase(it);
        mst.erase(mst.find(end-start));

        stp.insert({start,p[i]});
        stp.insert({p[i],end});
        mst.insert(p[i]-start);
        mst.insert(end-p[i]);

        cout<<*mst.rbegin()<<" ";

    }
    cout<<nl;
    

    return 0;
}