
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin>>d;
    while(d--){
        int n;
        cin>>n;
        int a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            a[i]=i+1;
            sum+=i;
        }
        int x;
        x=sum%n;
        a[0]+=x;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

