#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e8+9;
bool prime[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    prime[1]=true;
    vector<int> v;
    for (int i = 2; i*i <= N-9; i++)
    {
        if(!prime[i]){
            for (int j = i*i; j <= N-9; j+=i)
            {
                prime[j]=true;
            }
            
        }
    }
    for (int i = 2; i <= N-9; i++)
    {
        if(!prime[i]){
            v.push_back(i);
            // cout<<i<<'\n';
        }
    }
    for (int i = 0; i < v.size(); i+=100)
    {
        cout<<v[i]<<'\n';
    }
    
    return 0;
}