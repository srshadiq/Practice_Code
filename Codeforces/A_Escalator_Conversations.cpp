#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,m,k,v;
        cin>>n >>m >>k >>v;
        int h[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >>h[i];
        }
        for (int i = 0; i < n; i++)
        {
                for (int j = 1; j < m; j++)
                {
                    if(abs(v-h[i])==k*j)
                    {
                        count++;
                        break;
                    
                    }
                }
        }
        cout << count<<endl;
    }
    return 0;
}