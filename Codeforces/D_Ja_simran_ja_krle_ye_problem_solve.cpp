#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> freq(50000, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        freq[x]++;
    }
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        if(freq[i]==0){
            count++;
        }
    }
    cout<<count<<'\n';
    

    return 0;
}