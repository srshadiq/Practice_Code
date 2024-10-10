#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,r;
    cout <<"Enter n & d: ";
    cin >>n >>d;
    try
    {
        if(d==0)
        {
            // throw(0);
            throw("Divided by zero error");
        }
        r=n/d;
        cout <<"r= "<<r<<endl;
    }
    // catch(int x)
    // {
    //     cout <<"Divided by zero error"<<endl;
    // }
    catch(char const c[])
    {
        cout <<c <<endl;
    }
    return 0;
}