#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    cin>>x;
    ll n=sqrtl(x);
    while(n*n>x) n--;
    while(n*n<x) n++;
    int ans;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            while(n%i==0){
               n/=i;
            }
            ans=i;
        }
    }
    if(n>1) ans=n;
    cout<<ans<<'\n';

    return 0;
}