#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<bool> c(10000001,false);
    for (int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        v.push_back(b);
        c[b]=true;
    }
    int d=(count(c.begin(),c.end(),true));
    cout<<d<<endl;

    return 0;
}