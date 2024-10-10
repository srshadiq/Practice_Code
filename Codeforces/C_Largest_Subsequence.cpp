#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,b=0,ct=0;
        cin>>n;
        string s;
        cin>>s;
        string s1,s2,s3="";
        s1=s;
        s3.push_back(s[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(s3[k]<=s[i])
            {
                s3.push_back(s[i]);
                k++;
            }
        }
        s1=s;
        sort(s1.begin(),s1.end());
        if(s1==s)
        {
            cout<<"0"<<endl;
            continue;
        }
        int l=s3.size();
        int y=l-1;
        char ch=s3[y];
        for (int i = 0; i < n; i++)
        {
            if(s3[y]==s[i])
            {
                s[i]=s3[b];
                y--;
                b++;
            }
            if(s[i]==ch)
            {
                ct++;
            }
        }
        if(s1==s)
        {
            cout<<l-ct<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}