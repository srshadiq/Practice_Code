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
        int a[n+7];
        int sum=0;
        int flag=0;
        for (int i = 0; i < n ; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%3==1){
                flag=1;
            }
        }
        if(sum%3==0){
            cout<<0<<'\n';
        }
        else if(sum%3==2){
            cout<<1<<'\n';
        }
        else if(sum%3==1){
            if(flag){
                cout<<1<<'\n';
            }
            else{
                cout<<2<<'\n';
            }
        }
        

    }
    return 0;
}