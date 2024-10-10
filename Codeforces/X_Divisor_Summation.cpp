#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        int result=1;
        for (int i = 2; i*i <= n ; i++)
        {
            int e=0;
            while(n%i==0){
                n/=i;
                e++;
            }
            result*=(pow(i,(e+1))-1)/(i-1);
        }
        if(n>1) result*=(1+n);
        cout<<result-x<<'\n';
        
    }
    return 0;
}