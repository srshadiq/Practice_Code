#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,k;
        cin >>n >>k;
        int c[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>c[i];
        }
        int p=k;
        int x=0;
        sort(c,c+n);
        for (int i = 0; i < n; i+=k)
        {
            for (int j = i+1; j < k; j++)
            {
                if(c[i]!=c[j])
                {
                    x=1;
                }
            }
            
        }
        if(x==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}