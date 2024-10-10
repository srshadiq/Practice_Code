#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin>>n;
    int x;
     x=n/2;
    if(n%2==0){
        cout<<x<<'\n';
        for (int i = 1; i <= x; i++)
        { 
            cout<<2<<" ";
        }
        
    }
    else
    {
        cout<<x<<'\n';
        for (int i = 1; i <= x-1; i++)
        { 
            cout<<2<<" ";
        }
        cout<<3;
    }
    cout<<'\n';

    return 0;
}