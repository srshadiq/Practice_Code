#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n= a.size();
    int j=n-1-1;
    while(a[j]>a[j+1]){
        j--;
    }
    int k=n-1;
    while (a[j]>a[k])
    {
        k--;
    }
    swap(a[j],a[k]);
    int r=n-1;
    int s=j+1;
    while(r>s){
        swap(a[r],a[s]);
        r--;
        ++s;
    }
    cout<<a<<endl;
    return 0;
}