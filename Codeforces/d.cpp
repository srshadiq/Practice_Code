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
        int n,k;
        cin>>n>>k;
        vector<int> v;
        int flag=1;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            if(x>=k){flag=0;}
            v.push_back(x);
        }
        if(flag) cout<<-1<<endl;
        else{
            int m=v[0]%k;
            for (int i = 1; i < n; i++)
            {
                int x=v[i]%k;
                m=min(x,m);
            }
            cout<<m<<endl;
        }


        
    }
    return 0;
}