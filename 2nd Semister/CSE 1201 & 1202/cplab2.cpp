#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    cin >>x>>y;
    int result=1;
    while(y>0)
    {
        if(y%2==1)
        {
            result=(result*x)%100007;
        }
        y=y>>1;
        x=x*x;
    }
    cout<<result%100007<<endl;

    return 0;
}