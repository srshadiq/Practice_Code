#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,s;
    cin >>k>>s;
    long sum=0,ans=0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int l = 0; l <= k; l++)
            {
                sum=i+j+l;
                if(sum==s)
                {
                    ans++;
                }
            }
            
        }
        
    }
    cout <<ans<<endl;
    

    return 0;
}