#include<bits/stdc++.h>
using namespace std;

long long n;
vector <long long > x;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        
        cin >>n;
        
        for (long long i = 1; i <= n; i++)
        {
            if(n%i==0)
            {
                x.push_back(i);
            }
        }
        int best=0,z=1;
        for (int i = 0; i < x.size()-1; i++)
        {
            if(x[i]==x[i+1]-1)
            
            {
                z++;
                best=max(best,z);
            }
            else
            {
                z=0;
            }
        }
        
        cout<<best<<endl;

    }
    

    

    return 0;
}