#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
    
}
int main()
{
    int a,b,c,d,flag=0;
    cin>>a>>b>>c>>d;
    int diff=b-a+1,sum=0;
    for (int i = a; i <= b; i++)
    {
        flag=0;
        for (int j = c; j <= d; j++)
        {
            if(prime(i+j)){
                flag=1;
                // sum++;
            }
            // else flag=1;
        }
        if(flag) sum++;
        
    }
    // cout<<sum<<endl;
    if(sum==diff) cout<<"Aoki"<<endl;
    else cout<<"Takahashi"<<endl;
    

    return 0;
}