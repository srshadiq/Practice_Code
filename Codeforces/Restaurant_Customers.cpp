#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,m=0;
    cin>>n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int s,e;
        cin>>s>>e;
        v.push_back({s,1});
        v.push_back({e,-1});
    }
    sort(v.begin(),v.end());
    for (const pair<int,int> &t:v)
    {
        c+=t.second;
        m=max(m,c);
    }
    cout<<m<<endl;
    
    

    return 0;
}