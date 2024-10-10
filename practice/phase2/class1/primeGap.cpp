#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for (int i = 2; i*i <=n ; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
    
}
int main()
{
    int n;
    cin>>n;
    for (int i = n+1; ; i++)
    {
        if(is_prime(i)){
            cout<<i<<endl;
            return 0;
        }
    }
    

    return 0;
}