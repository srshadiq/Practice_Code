#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    cin >>a[0]>>a[1]>>a[2];
    int b[10];
    b[0]=a[0];
    b[1]=a[1];
    b[2]=a[2];
    sort(b,b+3);
    for (int i = 0; i < 3; i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i]<<endl;
    }
    
}