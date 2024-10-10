#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,n;
    long long ans=0;
    cin>>i>>j;
    for ( k = i; k <= j; k++)
    {
        n=k;
        long long a=0;
        while(1)
        {
            a++;
            if(n==1)
            {
                break;
            }
            if(n%2!=0)
            {
                n=3*n+1;
            }
            else
            {
                n=n/2;
            }
        }
        if(ans<a)
        {
            ans=a;
        }
        // ans=max(ans,a);

    }
    cout<<i<<" "<<j<<" "<<ans<<endl;

    return 0;
}