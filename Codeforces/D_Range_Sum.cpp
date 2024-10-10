#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin >>l >>r;
        long long sum;
        if(r>l)
        sum=(r*(r+1)/2)-((l-1)*(l)/2);
        else
        sum=((l)*(l+1)/2-(r*(r-1)/2));
        cout <<sum <<endl;

    }
    return 0;
}