#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for (int i = 0; i < n; i++)
        {
            if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&(s[i+1]=='a'||s[i+1]=='e')&&(s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d')&&(s[i+3]!='a'&&s[i+3]!='e'))
            {
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                ans.push_back(s[i+2]);
                ans.push_back('.');
                i+=2;

            }
            else if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&(s[i+1]=='a'||s[i+1]=='e'))
            {
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                ans.push_back('.');
                i+=1;

            }
        }
        ans.pop_back();
        cout<<ans<<endl;
        
    }
    return 0;
}