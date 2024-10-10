#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    int l=0;
    ll ans=0;
    unordered_map <int,int> ump;
    for (int r = 0; r < n; r++)
    {
        ump[a[r]]++;
        for (; ump.size()>k; l++)
        {
            ump[a[l]]--;
            if(ump[a[l]]==0)
            ump.erase(ump.find(a[l]));
        }
        ans+=r-l+1;  
    }
    // for(auto x: ump) cout<<x<<" ";
    cout<< ans <<nl;

    return 0;
}
