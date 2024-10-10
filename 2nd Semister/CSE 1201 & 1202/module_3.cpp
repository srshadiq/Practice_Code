#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    
    bool swapped=true;
    while(swapped){
    for (int i = 1; i < n; i++)
    {
        swapped= false;
        if(a[i-1]>a[i])
        {
            // int t=a[i-1];
            // a[i-1]=a[i];
            // a[i]=t;
            swap(a[i-1],a[i]);
            swapped=true;
            break;
        }
    }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<a[i]<<" ";
    }
    
    

    return 0;
}