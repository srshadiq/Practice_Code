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
        int n,m;
        cin>>n>>m;
        if(m%2==0){
            cout<<(n*(m/2))<<endl;
        }
        else{
            cout<<(n*((m-1)/2))<<endl;
        }
    }
    return 0;
}