#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=10,loc=-1,k=0;
    int x;
    cin >>x;
    while(loc=-1 &&k<n)
    {
        if(x==a[k])
        {
            loc=k+1;
            break;
        }
        k++;
    }
    if(loc==-1)
    {
        cout <<"X is not found in the array"<<endl;
    }
    else
    {
        cout << loc<<" is the location of X"<<endl;

    }

    return 0;
}