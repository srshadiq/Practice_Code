#include<bits/stdc++.h>
using namespace std;

int check(int x)
{
    if(x<=0)
        return 0;
    while(x>1)
    {
        if(x%2!=0)
            return 0;
        x=x/2;
    }
    return 1;
}

int main()
{
    int lb,ub,i,j;
    cin>>lb>>ub;
    i=check(lb);
    j=check(ub);
    if(i==1 && j==1 && lb<ub)
    {
        int x=log2(lb);
        int y=log2(ub);
        int ans=((ub/2)*y)-((lb/2)*x)+1;
        cout<<ans<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    

    return 0;
}