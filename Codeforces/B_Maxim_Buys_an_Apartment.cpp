#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll Min=1,Max;
    Max=min(2*k,n-k);
    if(k==0 || k==n){
        Min=0;
        Max=0;
    }
    cout<<Min<<" "<<Max<<nl;
    

    return 0;
}