#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a,b;
        cin>>s;
        int x=-1;
        for (int i = 1; i < s.size(); i++)
        { 
            if(s[i]!='0')
            {
                x=i;
                break;
            }
        }
        if(x==-1) cout<<"-1"<<endl;
        else{
        a=s.substr(0,x);
        b=s.substr(x,s.size()-x);
        int ia=stoi(a);
        int ib=stoi(b);
        if(ib>ia)
        cout<<a<<" "<<b<<endl;
        else
        cout<<"-1"<<endl;
        }
        
    }
    return 0;
}