#include<bits/stdc++.h>
#include <cmath>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n ; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    double sum=0.0;
    const double pi=3.14159265358979323846;
    for (int i = 0; i < n ; i++)
    {
        if(i&1){
            sum-=v[i]*v[i];
        }
        else{
            sum+=v[i]*v[i];
        }
    }
    printf("%0.10llf",sum*pi);
    // cout<<sum;
    cout<<'\n';

    return 0;
}