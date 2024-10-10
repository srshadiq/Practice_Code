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
    vector<pair<int,int>> vp;
    while(n--){

        int x,y;
        cin>>x>>y;
        vp.push_back(make_pair(x,1));
        vp.push_back(make_pair(y,-1));

    }
    sort(vp.begin(),vp.end());
    int ans=0,count=0;
    for(auto x: vp){
        count+=x.second;
        if(count>ans){
            ans=count;
        }
    }
    cout<<ans<<nl;

    return 0;
}