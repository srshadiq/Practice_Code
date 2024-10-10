#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=10,lb=0,ub=n-1,loc=-1;
    int mid=(int)(lb+ub)/2;
    int x;
    cin >>x;
    while(lb<=ub)//rajshahi uniersity of engineering and technology
    {//department of computer science and technology
        if(x<a[mid])
        {
            ub=mid-1;
        }
        else if(x>a[mid])
        {
            lb=mid+1;
        }
        else 
        {
            loc=mid;
            break;
        }
        mid=(int)(lb+ub)/2;
    }
    if(loc==-1)
    {
        cout <<"X is not found in the array"<<endl;
    }
    else
    {
        cout << loc+1<<" is the location of X"<<endl;

    }

    return 0;
}