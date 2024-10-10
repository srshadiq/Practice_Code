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
        ll a,b;
        cin>>a>>b;
        while(1){
            ll g=__gcd(a,b);
            if(g==1){
                break;
            }
            b/=g;
        }
        if(b==1){
            cout<<"Yes"<<'\n';
        }
        else{
            cout<<"No"<<'\n';
        }
    }
    return 0;
}