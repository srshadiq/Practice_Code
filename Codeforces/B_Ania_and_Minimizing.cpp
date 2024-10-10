#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    string s;
    cin >>n>>k;
    cin >>s;
    int y=0;
    if(n>1)
    {
        if(s[0]>'1')
            {
                if(y==k)
                {
                    cout<<s<<endl;
                    return 0;
                }
                s[0]='1';
                y++;
            }
        for (int i = 1; i < n; i++)
        {
            if(y==k)break;
            if(s[i]!='0')
            {
                s[i]='0';
                y++;
            }
        }
    }
    else
    {
        if(y==k)
        {
            cout<<s<<endl;
            return 0;
        }
        cout <<"0"<<endl;
        return 0;
    }
   cout<<s<<endl;
    

    return 0;
}