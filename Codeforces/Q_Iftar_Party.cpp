#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,cs=0;
    cin>>t;
    while(t--)
    {
        int l,p;
        cin>>p>>l;
        int n=p-l;
        vector<int>  v;
        for (int i = 1; i*1LL*i <= n; i++)
        {
            if(n%i==0){
                if(l<i){
                    v.push_back(i);
                }
                if(i!=n/i and l<n/i){
                    v.push_back(n/i);
                }
            }
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<++cs<<": ";
        if(v.empty()){
            cout<<"impossible"<<'\n';
        }
        else{
            for(auto x: v) cout<<x<<' ';
            cout<<'\n';
        }
        
    }
    return 0;
}