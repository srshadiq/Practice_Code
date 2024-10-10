#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,m;
    cin >>n >>l >>m;
    long long y=1,x=1;
    long long min=0,max=0;
    for (int i = 0; i < n; i++)
    {
        if(i<=n-l)
        {
            min=min+x;
        }
        else{
            x=x*2;
            min=min+x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i<m-1)
        {
            max=max+y;
            y=y*2;
        }
        else{
            max=max+y;
        }
    }
    
    cout <<min <<" "<<max<<endl;

    return 0;
}