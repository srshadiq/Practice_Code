#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a[i]%2==0 and a[j]%2==0 and i!=j)  
                {
                    if(a[i]>a[j])
                    {
                        swap(a[i],a[j]);
                    }
                }
                if(a[i]%2!=0&&a[j]%2!=0&&i!=j)  
                {
                    if(a[i]>a[j])
                    {
                        swap(a[i],a[j]);
                    }
                }  
            }
            
        }
        int x=0;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                x=1;
            }
            
        }
        
        if(x==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i]<<" ";
        // }
    }
    return 0;
}