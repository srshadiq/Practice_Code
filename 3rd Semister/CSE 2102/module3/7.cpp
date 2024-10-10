#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of cent: ";
    cin>>n;
    int q,d,ni,p;
    q=n/25;
    n=n%25;
    d=n/10;
    n=n%10;
    ni=n/5;
    n=n%5;
    p=n/1;
    cout<<"Quarters: "<<q<<endl;
    cout<<"Dimes: "<<d<<endl;
    cout<<"Nickles: "<<ni<<endl;
    cout<<"Pennies: "<<p<<endl;


    return 0;
}