#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD: "<<__gcd(a,b)<<endl;
    cout<<"LCM: "<<(a*b)/__gcd(a,b)<<endl;


    return 0;
}