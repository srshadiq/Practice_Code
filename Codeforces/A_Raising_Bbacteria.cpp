#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    while(n>1)
    {
        if(n%2==0)
        {
            n /=2;
        }
        else
        {
            n--;
            ans++;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}