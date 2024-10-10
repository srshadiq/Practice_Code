#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    int x=p[0];
    for (int i = 1; i < n; i++)
    {
        x=x^p[i];
    }
    
    cout<<x<<endl;

    

    return 0;
}