#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int b,c,h;
        cin >>b >>c >>h;
        if(b<2 or (c+h<1))
        {
            cout <<"0"<<endl;
        }
        else if(b>c+h)
        {
            cout <<2*(c+h)+1<<endl;
        }
        else if(b <=c+h)
        {
            cout << b+(b-1)<<endl;
        }
    }

    return 0;
}