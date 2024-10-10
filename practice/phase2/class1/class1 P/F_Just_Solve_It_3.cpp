#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e6+7;
int freq[N];
int a[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j+=i)
        {
            freq[i]+=a[j];
        }
        
    }
    for (int i = 1; i <= 1000000; i++)
    {
        cout<<freq[i]<<" ";
    }
    cout<<"\n";
    
    

    return 0;
}