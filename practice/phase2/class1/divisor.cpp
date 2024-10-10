#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    set<int> divs;
    for (int i = 1;i*i<=n; i++)
    {
        if(n%i==0) {
            divs.insert(i);
            divs.insert(n/i);
        }
    }
    for(auto x:divs) cout<<x<<" ";

    

    return 0;
}