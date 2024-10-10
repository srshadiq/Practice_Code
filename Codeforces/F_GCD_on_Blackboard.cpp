#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n+7);
    int gcd=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> v1(n+7),v2(n+7);
    v1[0]=a[0];
    v2[n-1]=a[n-1];
    for (int i = 1; i < n; i++)
    {
        v1[i]=__gcd(v1[i-1],a[i]);
    }
    for (int i = n-2; i >=0; i--)
    {
        v2[i]=__gcd(v2[i+1],a[i]);
    }
    int ans=1;
    for (int i = 1; i < n; i++)
    {
        ans=max(__gcd(v1[i-1],v2[i+1]),ans);
    }
    ans=max(ans,max(v2[1],v1[n-2]));
    cout<<ans<<nl;    

    return 0;
}