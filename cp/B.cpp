#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int d=1,l=1,u=1,c=1;
    for (int i = 0; i < n; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            d=0;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            u=0;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            l=0;
        }
        else if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||s[i]=='+')
        {
            c=0;
        }
      

    }

    
        int x=d+l+u+c;
        int y=6-n;
        // cout<<d<<l<<u<<c<<endl;
        if(n>=6)
        {
            cout<<x<<endl;
        }
        else
        {
            if(x>y)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<y<<endl;
            }
        }


    return 0;
}