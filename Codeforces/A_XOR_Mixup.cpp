#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],ans=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        int Xor;
        for (int i = 0; i < n; i++)
        {
            if(i==0)
            {  
                Xor=a[i+1];
                for (int j = 2; j < n; j++)
                {
                    Xor=Xor^a[j];
                }
            }
            else  
            {
                Xor=a[0];
                for (int j = 1; j < n; j++)
                {
                    if(i==j) continue;
                    Xor=Xor^a[j];
                }
            }
            if(Xor^a[i]==0)
            {
                ans=a[i];
                break;
            }
            
        }
        cout<<ans<<endl;

        
    }
    return 0;
}