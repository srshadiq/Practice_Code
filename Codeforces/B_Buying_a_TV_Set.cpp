#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,x,y,g,n,m;
    cin >>a>>b>>x>>y;
    g=__gcd(x,y);
    n=x/g;
    m=y/g;
    cout <<min(a/n,b/m)<<endl;

}