#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll divisible(ll n,ll x){
    return n/x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,l,r,lcm;
    cin>>n>>m>>l>>r;
    ll g=__gcd(m,n);
    if((long double)n/g>(long double)r/m){
        cout<<0<<'\n';
        return 0;
    }
    lcm=(m/g)*n;
    cout<<divisible(r,lcm)-divisible(l-1,lcm)<<'\n';

    return 0;
}