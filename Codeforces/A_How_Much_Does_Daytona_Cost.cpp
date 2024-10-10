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
        int a[n];
        int sum=0,test,flag=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==k)
            {
                sum++;
            }
        }
        if(sum==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}