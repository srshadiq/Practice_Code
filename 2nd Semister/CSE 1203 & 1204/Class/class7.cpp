#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,n,r;
    cout <<"Enter n and d: ";
    cin >>n>>d;
    try{
        if(d==0)
        // throw(0);
        // throw("");
        throw(12.5);
        r=n/d;
        cout <<"r= "<<r<<endl;
    }
    catch(int x)
    {
        cout <<"division by "<<x<<endl;
    }
    catch(char const y[])
    {
        cout <<y <<endl;
    }
    catch(...)
    {
        cout <<"undefined error"<<endl;
    }
    

    return 0;
}