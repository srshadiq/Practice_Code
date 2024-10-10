#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=1;
    cin>>n>>m;
    int a[n+10];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            ans=(ans*abs(a[i]-a[j]))%m;
        }
        
    }
    cout<<ans<<endl;
    
    return 0;
}