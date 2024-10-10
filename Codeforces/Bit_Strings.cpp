#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=1;
    long mod=1000000007;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
    

    return 0;
}