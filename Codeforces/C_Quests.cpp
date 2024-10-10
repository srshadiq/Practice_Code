#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            s[i]+=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        long long sum=0;
        int ans=s[0];
        int bx=b[0];
        int ff=0;
        for (int i = 1; i < k; i++)
        {
            if(b[i]>bx)
            {
                bx=b[i];
                ff=i;
            }

            if(s[i]-s[i-1]>=bx*(i-ff))
            {
                ans=s[i];
            }
            else
            {
                ans=s[i-1]+bx*(i-ff);
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}