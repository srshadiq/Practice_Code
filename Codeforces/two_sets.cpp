#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==1 || n%4==2){
        cout<<"NO\n";
    }
    else if(n%4==3){
        cout<<"YES\n";
        cout<<n/2<<endl;
        for(int i=2;i<=n/2;i=i+2){
            cout<<i<<' '<<n-i<<' ';
        }
        cout<<n<<endl;
        cout<<(n/2)+1<<endl;
         for(int i=1;i<=n/2;i=i+2){
            cout<<i<<' '<<n-i<<' ';
        }
        cout<<endl;
    }
    else{
        cout<<"YES\n";
        cout<<n/2<<endl;
        for(int i=2;i<=n/2;i=i+2){
            cout<<i<<' '<<n-i+1<<' ';
        }
        cout<<endl;
        cout<<(n/2)<<endl;
         for(int i=1;i<=n/2;i=i+2){
            cout<<i<<' '<<n-i+1<<' ';
        }
        cout<<endl;
    }
    return 0;
}
