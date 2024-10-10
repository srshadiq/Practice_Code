#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0,y=0,c=0,d=0;
    cin>>n;
    string s;
    cin>> s;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]=='U')
        {
            x++;
        }
        else if(s[i]=='R')
        {
            y++;
        }
        if(x==y)
        {
            c++;
            if((s[i]=='U'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='U'))
            {
                d++;
            }
        }
    }
    cout<<c-d<<endl;
    

    return 0;
}