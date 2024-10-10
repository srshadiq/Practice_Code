#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1;
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s<=s1)
        {
            cout<<s<<nl;
        }
        else{
            cout<<s1+s<<nl;
        }
    }
    return 0;
}