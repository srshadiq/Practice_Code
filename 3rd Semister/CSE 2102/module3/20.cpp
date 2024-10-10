#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,r;
    cin>>a>>b;
    if(b>a) swap(a,b);
    int x=a;
    int y=b;
    while(y!=0){
        r=x%y;
        x=y;
        y=r;
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<x<<endl;
    

    return 0;
}