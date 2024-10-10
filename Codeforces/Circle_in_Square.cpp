#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        float r;
        cin >>r;
        double pi=2*acos(0.0);
        printf("Case %d: %.2f\n",i,(4*r*r)-(pi*r*r));
    }
    return 0;
}