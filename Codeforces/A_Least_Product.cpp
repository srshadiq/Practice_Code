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
        long a[n];
        long long m=1;
        int negative=0,zero=0;;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            m*=a[i];
            if(a[i]<0)
            negative++;
            if(a[i]==0)
            zero++;

        }
        if(negative%2!=0||zero>0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }

        
    }
    return 0;
}