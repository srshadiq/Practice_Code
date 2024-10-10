#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int ans=0;
        int B[27]={};

        for (int i = 0; i < b.size(); i++)
        {
            B[b[i]-'a']++;
        }
        for (int i = 0; i < a.size(); i++)
        {
            if(B[a[i]-'a']>0){
                ans++;
                B[a[i]-'a']--;

            }
            else break;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}