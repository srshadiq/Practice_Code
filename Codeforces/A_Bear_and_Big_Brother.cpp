#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;
    for (int i = 0; ; i++)
    {
        if(a>b)
        {
            cout <<i<<endl;
            return 0;
        }
        a=a*3;
        b=b*2;
    }
    
}