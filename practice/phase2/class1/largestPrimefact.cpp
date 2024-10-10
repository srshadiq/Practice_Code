#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 2; i*i <= n; i++)
    {
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1) v.push_back(n);
    sort(v.begin(),v.end());
    // for(auto x: v) cout<<x<<endl;
    cout<<v[v.size()-1]<<endl;
    

    return 0;
}