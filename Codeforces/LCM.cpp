#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    long long lcm,x;
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    for (int i = 1;; i++)
    {
        int flag=0;
        x=a[0]*i;
        for (int j = 0; j < n; j++)
        {
            if(x%a[j]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout <<x<<endl;
            return 0;
        }
        
    }  
}