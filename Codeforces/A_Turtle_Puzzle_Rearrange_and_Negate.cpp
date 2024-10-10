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
        int a[n];
        ll sum=0;
        for (int i = 0; i < n ; i++)
        {
            cin>>a[i];
            if(a[i]>=0){
                sum+=a[i];
            }
            else{
                sum+=(a[i]*(-1));
            }
        }
        cout<<sum<<'\n';
        

        
    }
    return 0;
}