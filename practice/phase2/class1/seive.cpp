#include<bits/stdc++.h>
using namespace std;

const int N=1e6+9;
bool f[N];
int main()
{
    int n;
    cin>>n;
    f[1]=true;
    vector<int> v;
    for (int i = 2; i*i <= n; i++)
    {
        if(!f[i]){
            for (int j = i*i; j <= n; j+=i)
            {
                f[j]=true;
            }   
        }
    }
    for (int  i = 2; i <= n; i++)
    {
        if(!f[i]){
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v) cout<<x<<" ";
    return 0;
}