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
        int a,b,l;
        cin>>a>>b>>l;
        int x=1,y;
        int ans=0;
        set<ll>s;
        for (int i = 0; i<32&& x<=l; x*=a,i++)
        {
            y=1;
            for (int j = 0; j<32&&y <= l; y*=b,j++)
            {
                ll k=(x*1LL*y);
                if(l%k==0){
                    s.insert(l/k);
                }
            }
            
        }
        cout<<s.size()<<'\n';
    }
    return 0;
}