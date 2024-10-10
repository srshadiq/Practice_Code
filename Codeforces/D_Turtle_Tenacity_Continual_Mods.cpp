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
        vector<int> a(n);
        int min=INT_MAX;
        for (int i = 0; i < n ; i++)
        {
            cin>>a[i];
            if(a[i]<min){
                min=a[i];
            }
        }
        int countt;
        // for (int i = 0; i < n ; i++)
        // {
        //     if(min==a[i]){
        //         count++;
        //     }
        // }
        countt=count(a.begin(),a.end(),min);
        int low;
        int flag=0;
        if(countt==1){
            cout<<"YES"<<'\n';
        }
        else if(countt>1){
            for (int i = 0; i < n; i++)
            {
                if(a[i]%min!=0){
                    flag=1;
                }
            }
            if(flag){
                cout<<"YES"<<'\n';
            } 
            else{
            cout<<"NO"<<'\n';

            } 
        }    
    }
    return 0;
}