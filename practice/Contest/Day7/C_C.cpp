#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    vector<int> a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%2==0){
            a.push_back(x);
        }
        else{
            b.push_back(x);
        }
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    for(auto x: b ) cout<<x<<" ";
    for(auto x: a ) cout<<x<<" ";

    return 0;
}