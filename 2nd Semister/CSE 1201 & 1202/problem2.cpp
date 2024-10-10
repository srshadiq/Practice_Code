#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int la[100]={1,2,3,4,5};
    int k,x;
    cin >> k;
    x=la[k];
    for (int j = k; j <n; j++)
    {
        la[j]=la[j+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<la[i]<<" ";
    }
    
}