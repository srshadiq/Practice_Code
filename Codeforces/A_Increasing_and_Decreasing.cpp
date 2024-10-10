#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int x,y,n;
            cin >>x>>y>>n;
            int a[n],b[n];
            int k=1,flag=0;
            a[n-1]=x;
            for (int i = 0; i < n-1; i++)
            {
                a[i]=y;
                y=y-k;
                k++;
                
            }
           reverse(a,a+n);
            for (int i = 0; i < n-1; i++)
            {
                b[i]=a[i+1]-a[i];
            }
            for (int i = 0; i < n-2; i++)
            {
                if(b[i]<=b[i+1])
                {
                    flag=1;
                }

            }
            if(flag==0)
            {
                for (int i = 0; i < n; i++)
                {
                    cout <<a[i]<<" ";
                }
            }
            else{
                cout <<"-1";
            }
            cout <<endl;     
    }
    return 0;
}