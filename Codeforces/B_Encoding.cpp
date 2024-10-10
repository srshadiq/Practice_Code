#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,a=0;
    cin>>n;
    string s;
    cin>>s;
    vector<char> c;
    while(n!=0)
    {
        if(n%2!=0)
        {
            x=n/2;
            // c[a]=s[x];
            c.push_back(s[x]);
            for (int i = x; i < n-1; i++)
            { 
                s[i]=s[i+1];
            }
            n--;
            a++;
        }
        else
        {
            x=(n/2)-1;
            // c[a]=s[x];
            c.push_back(s[x]);
            for (int i = x; i < n-1; i++)
            { 
                s[i]=s[i+1];
            }
            n--;
            a++;
        }
    }
   
    for (int i = 0; i < c.size(); i++)
    {
        cout <<c[i];
    }
    
    cout<<endl;
    
    

    return 0;
}