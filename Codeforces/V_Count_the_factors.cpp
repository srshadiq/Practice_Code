#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int n,ans=0,x;
        cin>>n;
        x=n;
        if(n==0) break;
        for (int i = 2; i*i <=n; i++)
        {
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                ans++;
            }
        }
        cout<<x<<" : "<<ans+1<<'\n';
        
    }

    return 0;
}