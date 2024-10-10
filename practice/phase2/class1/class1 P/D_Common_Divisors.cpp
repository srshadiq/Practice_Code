#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,x,gcd=0;
    cin>>n;
    for (ll i = 0; i <n; i++)
    {
        cin>>x;
        gcd=__gcd(gcd,x);

    }
    int ans=0;
    for (int i = 1; i*1ll*i <= gcd; i++)
    {
        if(gcd%i==0){
            ans++;
            if(i!=gcd/i){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}