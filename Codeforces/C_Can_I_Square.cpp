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
        int a[n+10];
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        long long ss=sqrt(sum);
        if(ss*ss==sum)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        
    }
    return 0;
}