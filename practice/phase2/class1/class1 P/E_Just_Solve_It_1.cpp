#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e6+9;
int spf[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i < N; i++)
    {
        spf[i]=i;
    }
    for (int i = 2; i < N; i++)
    {
        if(spf[i]==i){
            for (int j = i; j < N; j+=i)
            {
                spf[j]=min(spf[j],i);
            }
        }
    }
    int n,x;
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        cin>>x;
        
        cout<<spf[x]<<' ';
        int w=0,t=0,d=1;
        ll s=1;
        int gpf=0;
        while(x>1){
            int k=spf[x];
            gpf=max(gpf,k);
            w++;
            int p=0,po=1;
            while(x%k==0){
                p++;
                t++;
                po*=k;
                x/=k;
            }
            d*=(p+1);
            s*=(1LL*po*k-1)/(k-1);

        }
    cout<<gpf<<' '<<w<<' '<<t<<' '<< d<<' '<<s<<"\n";

    }
    

    return 0;
}