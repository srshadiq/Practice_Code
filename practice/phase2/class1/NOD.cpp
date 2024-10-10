#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=1;
    for (int i = 2; i <=n; i++)
    {
        int p=0;
        if(n%i==0)
        {
            while(n%i==0){
                n/=i;
                p++;
            }
        res*=(p+1);
        }
    }
    cout<<res<<endl;

    return 0;
}