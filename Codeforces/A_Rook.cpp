#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char x=s[0];
        int y=s[1]-'0';
        for (int  i = 1; i <= 8; i++)
        {
            if(y!=i)
            {
                cout<<x<<i<<endl;
            }
        }
        for (char i = 'a'; i <='h'; i++)
        {
            if(x!=i)
            {
                cout<<i<<y<<endl;
            }
        }
        
        
    }
    return 0;
}