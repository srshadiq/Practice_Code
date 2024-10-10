#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int n=s.size();
    int m=n,flag=0;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            if(s[i]==s[j])
            {
                swap(s[j],s[n-i-1]);
                break;
            }
        }
    }
    for (int i = 0; i < n/2; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            swap(s[i],s[n/2]);
        }
    }
    for (int i = n-1; i >= n/2; i--)
    {
        if(s[i]!=s[n-i-1])
        {
            flag=1;
        }
    }
    for (int i = 0; i < n/2; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            if(s[i]==s[j])
            {
                swap(s[j],s[n-i-1]);
                break;
            }
        }
    }
    if(flag==0)
    {
        cout <<s<<endl;
    }
    else
    {
        cout <<"NO SOLUTION"<<endl;
    }
    return 0;
}