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
        int x=n-k-1;
        vector<int> v;
        for (int i = 1; i <=k; i++)
        {
            v.push_back(i);
        }
        int c=0;
        if(k%2==0){
        for (int i = k+1; i<=n ; i++)
        {
            if(i%2==0){
                v.push_back(i);
            } 
        }
        for (int i = k+1; i<=n ; i++)
        {
            if(i%2==1){
                v.push_back(i);
            } 
        }
        }
        else{
        for (int i = k+1; i<=n ; i++)
        {
            if(i%2==1){
                v.push_back(i);
            } 
        }
        for (int i = k+1; i<=n ; i++)
        {
            if(i%2==0){
                v.push_back(i);
            } 
        }
        }
        // sort(v.rbegin(),v.rend());
    // for (int i = v.size()-1; i >=0; i--)
    // {
    //     cout<<v[i]<<' ';
    // }
    
        for(auto x: v) cout<<x<<' ';
        cout<<'\n';
        

    }
    return 0;
}