#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        int ans=0;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n-1; i++)
        {
            if(abs(a[i]-a[i+1])<=k)
            {
                continue;
            }
            else
            {
                for (int j = i+1; j < n-1; j++)
                {
                    a[j]=a[j+1];
                  
                }
                ans++;
                n--;
                i=-1;
                
                
            }
            
    }
    cout <<ans<<endl;  
        
    }

    
}