#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD=1e9+7;
const int N=5e4+7;
int spf[N];
void SPF(){
    for (int i = 2; i < N; i++)
    {       
        spf[i]=i;
    }
    for (int i = 2; i < N ; i++)
    {
        if(spf[i]==i){
            for (int j = i; j < N ; j+=i)
            {
                spf[j]=min(spf[j],i);
            }
            
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    SPF();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=1;
            vector<int> cnt(n+1,0);
            for (int i = 2; i <= n; i++)
            {
                int x=i;
                while(x>1){
                    cnt[spf[x]]++;
                    x/=spf[x];
                }
            }
            for(auto e: cnt){
                ans=((1LL*ans%MOD)*((e+1)%MOD))%MOD;
            }
        
        cout<<ans<<'\n';
        
    }
    return 0;
}