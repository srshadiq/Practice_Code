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
        int one=0,zero=0;
        string t="";
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')one++;
            else zero++;
        }
        int x=0;
        int k=one;
        if(zero==one){
            cout<<"0"<<endl;
            continue;
        }
        else if(one<zero)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if(one>0)
                {
                    if(s[i]=='0')
                    {
                        t.push_back('1');
                        one--;
                    }
                    else
                    {
                        t.push_back('0');
                    }
                }
                else
                {
                    t.push_back('0');
                }
            }
        }
        else if(one>zero)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if(zero>0)
                {
                    if(s[i]=='1')
                    {
                        t.push_back('0');
                        zero--;
                    }
                    else
                    {
                        t.push_back('1');
                    }
                }
                else
                {
                    t.push_back('1');
                }
            }
        }
        int count=0;
        // cout<<t<<endl;
        int p;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==t[i])
            {
                p=i;
                break;
            }
        }
        cout<<s.length()-p<<endl;
        
        
        
        
    }
    return 0;
}