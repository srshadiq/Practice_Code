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
        string a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==c[i] or b[i]==c[i]);
            else
             flag=1;

        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}