#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ans=1;
    for (int i = 2; i*i <= n; i++)
    {
        int e=0;
        while(n%i==0){
            e++;
            n/=i;
        }
        ans*=((pow(i,e+1))-1)*1LL/(i-1);

    }
    if(n>1) ans*=n+1;
    cout<<ans<<endl;

    return 0;
}