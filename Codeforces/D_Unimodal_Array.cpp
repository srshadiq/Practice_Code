#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int flag=1;
    int same=0;
    int increase=0;
    int decrease=0;
    if(n==1){
        cout<<"YES"<<nl;
        return 0;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(increase==0){
            if(a[i]<a[i+1]){
                increase=1;
            }
        }
        if(same==0){
            if(a[i]==a[i+1]){
                same=1;
            }
        }
        if(decrease==0){
            if(a[i]>a[i+1]){
                decrease=1;
            }
        }
        if(same==1){
            if(a[i]<a[i+1]){
                flag=0;
            }
        }
        if(decrease==1){
            if(a[i]==a[i+1] || a[i]<a[i+1]){
                flag=0;
            }
        }

    }
    if(flag){
        cout<<"YES"<<nl;

    }
    else{
        cout<<"NO"<<nl;
    }
    
    

    return 0;
}