#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;

    vector<ll> a(n),b(m),c(m);
    ll gcd=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        gcd=__gcd((a[i]-a[0]),gcd);
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        cout<<__gcd((a[0]+b[i]),gcd)<<" ";
    }

    return 0;
}