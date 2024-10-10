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
        int n,k,d;
        cin>>n>>k>>d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        unordered_map<int,int> ump;
        for (int i = 0; i < d; i++)
        {
            ump[a[i]]++;
        }
        int ans=ump.size();

        for (int i = d; i < n; i++)
        {
            ump[a[i]]++;
            ump[a[i-d]]--;
            if(ump[a[i-d]]==0){
                ump.erase(ump.find(a[i-d]));
            }
            if(ump.size()<ans){
                ans=ump.size();
            }
        }
        
        cout<<ans<<nl;
        

        
    }
    return 0;
}