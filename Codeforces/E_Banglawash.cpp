#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n,b=0,w=0,a=0,d=0,t=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
           
            if(s[i]=='B')
            {
                b++;
            }
            else if(s[i]=='W')
            {
                w++;
            }
            else if(s[i]=='T')
            {
                t++;
            }
            else if(s[i]=='A')
            {
                a++;
            }

        }
        if(a==n)
        {
            cout<<"Case "<<k<<": ABANDONED"<<endl;
        }
        else if(b+a==n)
        {
            cout<<"Case "<<k<<": BANGLAWASH"<<endl;
        }
        else if(a+w==n)
        {
            cout<<"Case "<<k<<": WHITEWASH"<<endl;
        }
         else if(w==b)
        {
            cout<<"Case "<<k<<": DRAW "<<w<<" - "<<b<<endl;
        }
         else if(w<b)
        {
            cout<<"Case "<<k<<": BANGLADESH "<<b<<" - "<<w<<endl;
        }
         else if(w>b)
        {
            cout<<"Case "<<k<<": WWW "<<w<<" - "<<b<<endl;
        }

        
    }
    return 0;
}