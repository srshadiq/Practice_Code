#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%2==0){
        int x=(n/2)-1;
        cout<<x/2<<'\n';
        return 0;
    }
    else{
        cout<<0<<'\n';
        return 0;
    }
}