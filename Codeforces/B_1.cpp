#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
    long long a=0,s=100;
    while(true){
        s=s+(s/100);
        a++;
        if(s>=x)
        break;
    }
    cout<<a<<endl;
    return 0;
}