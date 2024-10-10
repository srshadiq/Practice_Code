#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2,s3="";
        cin>>s1;
        cin>>s2;
        int flag=0;
        s3+=s1[0];
        for (int i = 1; i < n; i++)
        {
            if(s1[i]<=s2[i-1]){
                s3+=s1[i];
                flag=i;
            }
            else{
                break;
            }
        }
        for (int i = flag; i < n; i++)
        {
            s3+=s2[i];
        }
        int count=1;
        for (int i = flag; i >=1; i--)
        {
            if(s1[i]==s2[i-1]){
                count++;
            }
            else break;
        }
        
        cout<<s3<<nl;
        cout<<count<<nl;

    }
    return 0;
}