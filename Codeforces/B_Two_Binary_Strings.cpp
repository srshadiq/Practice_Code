#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin >>a>>b;
        bool ans=false;
        for (int i = 0; i+1 < a.size(); i++)
        {
            if(a[i]==b[i] && a[i+1]==b[i+1] && a[i]=='0'&&a[i+1]=='1')
            ans=true;
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    return 0;
}