#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >>x;
    int flag=0;
    for (int i = 2; i < x; i++)
    {
        if(x%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
    

    return 0;
}