#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n],e=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if((a[i]%2)!=0)
            {
                e++;
            }
        }
        if(e%2==0)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}