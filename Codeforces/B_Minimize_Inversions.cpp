#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int b[n+10];
        int c[n+10]={};
        vector<int> a;
        vector<pair<int,int>> p;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            p.push_back(make_pair(x,i));

        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
    for(auto x: a){
        cout<<x<<' ';
    }
    cout<<endl;
    sort(p.begin(),p.end());

    for (int i = 0; i < n; i++)
    {
        cout<<b[p[i].second]<<' ';
    }
    
    cout<<endl;
        
        
    }
    return 0;
}