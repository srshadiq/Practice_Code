#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    for (int i = 2; i*i <= n; i++)
    {
        int x=0;
        if(n%i==0){
            while(n%i==0){
                x++;
                n/=i;
            }
            ans=max(ans,x);
        }
    }
    cout<<ans<<endl;

    return 0;
}