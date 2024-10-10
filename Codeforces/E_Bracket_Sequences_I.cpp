#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;
int fact[1000007];

int exp(int a,int b)
{
    int result=1;
    while(b>0)
    {
        if(b&1) 
            result=(result*1LL*a)%M;
        a=(a*1LL*a)%M;
        b=b/2;
    }

    return result;
}
int main()
{
    int n;
    cin>>n;
    if(n&1) 
    {
        cout<<0<<endl;
    }
    else
    {
    fact[0]=1;
    for (int i = 1; i <= n; i++)
    {
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
    int x=(((n/2)+1)*1LL*fact[n/2]%M*fact[n/2]%M)%M;
    int ans=fact[n];
    ans=(ans*1LL*exp(x,M-2))%M;
    cout<<ans<<endl;
    }
    return 0;
}