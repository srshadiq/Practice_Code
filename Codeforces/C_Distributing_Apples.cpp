#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;
int exp(int a,int b,int m)
{
    int result=1;
    while(b>0)
    {
        if(b&1)
        {
            result=(result*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b=b/2;
    }
    return result;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int fact=1;
    for (int i = 1; i <=m; i++)
    {
        fact=(fact*1LL*i)%M;
    }
    long long ans=1;
    for (long long i = n+m-1; i >n-1; i--)
    {
        ans=(ans*1LL*i)%M;
    }
    ans=(ans*1LL*exp(fact,M-2,M))%M;
    cout<<ans<<endl;
    return 0;
}