#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll cross(ll a,ll b,ll p){

    return ((__int128(a)%p) * (b%p)) % p;
}

ll power(ll a,ll b,ll p){
    ll ans=1;
    while(b>0){
        if(b&1){
            ans=cross(ans,a,p);
        }
        b=b>>1;
        a=cross(a,a,p);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,p;
    cin>>a>>b>>p;
    cout<<power(a,b,p)<<'\n';
    cout<<cross(a,b,p)<<'\n';
    ll ib=power(b,p-2,p);
    cout<<cross(a,ib,p)<<'\n';

    return 0;
}