#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    string s;
    cin >>s;
    int nu=1,lc=1,uc=1,sc=1;
    for (int i = 0; i < n; i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            nu=0;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            lc=0;
        }
        if(s[i]>='A'&&s[i]<='Z')
        {
            uc=0;
        }
        if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='^' ||s[i]=='&' ||s[i]=='*' ||s[i]=='(' ||s[i]==')' ||s[i]=='-' ||s[i]=='+')
        {
            sc=0;
        }
    }
    if(n>=6)
    {
        cout <<nu+lc+uc+sc<<endl;
    }
    else
    {
        int x=nu+lc+uc+sc;
        int y=6-n;
        if(x<y)
        {
            cout <<y<<endl;
        }
        else
        {
            cout <<x<<endl;
        }
    }

    return 0;
}