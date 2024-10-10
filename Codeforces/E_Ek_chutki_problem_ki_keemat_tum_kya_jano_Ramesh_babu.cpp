#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<ll> a;
    vector<ll> b;
    ll sum[n+10];

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin>>x;
        b.push_back(x);
    }
    sum[0]=0;
    sum[1]=a[0];
    for (int i = 2; i < n; i++)
    {
        sum[i]=sum[i-1]+a[i-1];
    }
    int k=0;
    for (int i = 1; i < n+1; i++)
    {
        while(b[k]<=sum[i]){
            cout<<i<<" "<<b[k]-sum[i-1]<<'\n';
            k++;
            if(k==m) break;
        }
    }
    
    

    return 0;
}