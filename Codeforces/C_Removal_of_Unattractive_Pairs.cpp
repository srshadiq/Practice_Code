#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0,ans;
        string s;
        cin>>n>>s;
        vector<int> v(26,0);
        for (int i = 0; i < n; i++)
        {
            v[s[i]-'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            mx=max(mx,v[i]);
        }
        if(mx*2>n)
            ans=2*mx-n;
        else
            ans=n%2;
        cout<<ans<<endl;
        
    }
    return 0;
}