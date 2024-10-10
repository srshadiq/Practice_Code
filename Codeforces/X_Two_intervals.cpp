#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1,l2,r1,r2;
    cin >>l1>>l2>>r1>>r2;
    int left,right;
    if(l1>r1)
    {
        left=l1;
    }
    else
    {
        left=r1;
    }
    if(l2<r2)
    {
        right=l2;
    }
    else
    {
        right=r2;
    }
    if(l2<r1||l1>r2)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout <<left <<" "<<right<<endl;
    }
    return 0;
}