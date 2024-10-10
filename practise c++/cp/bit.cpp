#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10,b=12;
    int x=a&b;
    int y=a|b;
    int z=a^b;
    int k=~a;
    int r=a>>2;
    int l=a<<2;
    int o=__builtin_popcount(a);
    int lz=__builtin_clz(a);
    int tz=__builtin_ctz(a);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<k<<endl;
    cout<<r<<endl;
    cout<<l<<endl;
    cout<<o<<endl;
    cout<<lz<<endl;
    cout<<tz<<endl;
}
