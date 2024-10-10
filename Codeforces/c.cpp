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
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a+b+c+d+e>=4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}