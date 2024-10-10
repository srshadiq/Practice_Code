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
        string ans="";
        int big=0;
        int small=0;
        for (int i = s.size()-1; i >= 0; i--)
        {
            if(s[i]=='b'){
                small++;
            }
            else if(s[i]=='B'){
                big++;
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                if(small>0)
                {
                    small--;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                if(big>0)
                {
                    big--;
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }

        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        
        
    }
    return 0;
}