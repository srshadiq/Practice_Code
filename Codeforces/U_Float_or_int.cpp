#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin>>n;
    int x=(int)n;
    // cout <<x<<endl;
    if(x==n){
        printf("int %d ",x);
    }
    else{
        printf("float %d %0.3f",x,n-x);
    }
    return 0;
}