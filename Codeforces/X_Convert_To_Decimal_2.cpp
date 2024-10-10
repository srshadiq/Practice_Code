#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans=0;
        int d,r;
        cin >>n;
        vector<long> v,x;
        while(n>0)
        {
            r=n%2;
            v.push_back(r);
            n=n/2;
        }
        reverse(v.begin(),v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]==1)
            {
                x.push_back(1);
            }
        }
        for (int i = 0; i < x.size(); i++)
        {
            ans=ans+pow(2,i);
        }
        
        cout <<ans<<endl;
        
    }
    return 0;
}