#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=3;
        cin>>n;
        int a=7,b=11,c=14;
        cout<<a<<" "<<b<<" "<<c<<" ";
        for (int i=15; ; i++)
        {
            if(ans==n)
            {
                cout<<endl;
                break;
            }
            
            
            if((i*3)%(b+c)!=0)
            {
                cout<<i<<" ";
                
                a=b;
                b=c;
                c=i;
                ans++;
                b=c;
                c=i;
            }           
        }
        
    }
    return 0;
}