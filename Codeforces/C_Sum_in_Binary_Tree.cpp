#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        while(n>=1)
        {
            sum=sum+n;
            n=n/2;
        }
        cout<<sum<<endl;

    }
    return 0;
}