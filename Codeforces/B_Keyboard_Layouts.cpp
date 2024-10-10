#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin >>a>>b>>c;
    vector <char> x;
    for (int i = 0; i < c.size(); i++)
    {
        if(c[i]>='0' && c[i]<='9')
        {
            x.push_back(c[i]);
        }
        else if(c[i]>='A'&&c[i]<='Z')
        {
            for (int j = 0; j < 26; j++)
            {
                if(c[i]==toupper(a[j]))
                {
                    x.push_back(toupper(b[j]));
                }
            }
            
        }
        else
        {
            for (int j = 0; j < 26; j++)
            {
                if(c[i]==a[j])
                {
                    x.push_back(b[j]);
                }
            }
        }
        
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i];
    }
    
    
    
    return 0;
}