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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=a[0];
        int j=a[n-2];
        int k=a[1];
        int l=a[n-1];
        int sum=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
        cout<<sum<<nl;

        // for(auto x: a) cout<<x<<" ";
        // cout<<nl;
    }
    return 0;
}