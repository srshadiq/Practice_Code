#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=1;
        cin >>n;
        int a[n];
        long c=0;

        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        for(int i=0;i<1000000000;i++)
        {
            s=1;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                s=0;
            }
        }
        if(s==1)
        {
            break;
        }
        if(s==0)
        {
            for (int i = 0; i < n; i++)
            {
                a[i]=max(0,a[i]-1);
            }
            
        }
        }
    for (int i = 0; i < n; i++)
    {
        cout <<a[i]<<" ";
    }
    cout <<endl;
    
        
        // cout <<c<<endl;
        
        
    }
    return 0;
}