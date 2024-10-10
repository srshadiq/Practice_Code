#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >>n>>a>>b;
    int s[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >>s[i];
        sum=sum+s[i];
    }
    sort(s+1,s+n);
    int y=0,ans=0,x;
    for (int i = n-1; i > 0; i--)
    {
        x=(s[0]*a)/(sum-y);
        if(x<b)
        {
            y=y+s[i];
            ans++;
        }

    }
    cout<<ans<<endl;
    

    return 0;
}