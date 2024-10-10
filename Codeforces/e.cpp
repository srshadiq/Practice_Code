#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        int m=1,cnt=0;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            cnt++;
            m=max(cnt,m);
            if(s[i]!=s[i+1]){
                cnt=0;
            }
        }
            // cout<<m<<' ';

        for (int i = 0; i <q ; i++)
        {
            char c;
            cin>>c;
            s=s+c;
            cnt++;
            m=max(cnt,m);
            if(s[n+i-1]!=s[n+i]){
                cnt=0;
            }
            cout<<m<<' ';

        }
            cnt++;
            m=max(cnt,m);
            if(s[n+q-1]!=s[n+q]){
                cnt=0;
            }
            cout<<m<<' ';
            // cout<<s<<' ';

            // cout<<s.size();
            // cout<<m<<' ';

        // for (int i = n-1; i < s.size(); i++)
        // {
        //     // cout<<s.size();
        //     cnt++;
        //     m=max(cnt,m);
        //     if(s[i]!=s[i+1]){
        //         cnt=0;
        //     }
        //     cout<<m<<' ';

        // }
        cout<<'\n';
        
    }
    return 0;
}