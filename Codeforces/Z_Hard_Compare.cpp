#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin >>a >>b >>c >>d;
    if(pow(a,b)==pow(c,d))
    {
        cout <<"NO"<<endl;
    }
    else if(pow(a,b)>pow(c,d))
    {
        cout <<"YES"<<endl;
    }

    else{
        cout <<"NO"<<endl;
    }
    return 0;

}