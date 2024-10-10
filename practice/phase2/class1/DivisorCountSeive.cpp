#include<bits/stdc++.h>
using namespace std;

int d[100000];
int main()
{
    int n=50;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n ; j+=i)
        {
            d[j]++;
        }
        
    }
    for (int i = 1; i <= n ; i++)
    {
        cout<<d[i]<<" ";
    }
    

    return 0;
}