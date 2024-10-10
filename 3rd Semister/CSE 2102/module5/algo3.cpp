#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    int a[n],b[r];
    cout<<"Enter the value of the list: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of the last combination: ";
    for(int i=0;i<r;i++){
        cin>>b[i];
    }
    int i=r-1;
    while(b[i]==n-r+i+1){
        i=i-1;
    }
    b[i]=b[i]+1;
    for(int j=i+1;j<r;j++){
        b[j]=b[i]+j-i;
    }
    cout<<"The next r-combination: ";
    for(int i=0;i<r;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
