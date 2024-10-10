#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x=0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            for (int j = i+1; j < n-1; j++)
            {
                if(a[j]<a[j+1])
                {
                    x=1;
                }
            }
            
        }
        if(a[i]>a[i+1])
        {
            for (int j = i+1; j < n-1; j++)
            {
                if(a[j]<a[j+1])
                {
                    x=1;
                }
            }
            
        }
        if(a[i]>a[i+1])
        {
            for (int j = i+1; j < n-1; j++)
            {
                if(a[j]==a[j+1])
                {
                    x=1;
                }
            }
            
        }
    }
    if(x==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout <<"YES"<<endl;
    }

    return 0;
}