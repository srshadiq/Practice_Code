
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> sieven(n,0);
    for (int x = 2; x <= n; x++) {
        if (sieve[x]) continue;
        for (int u = 2*x; u <= n; u += x) {
            sieve[u] = x;
        }
}
    for(int i=0;i<n;i++)
    {

        cout<<sieve[i]<<" ";
    }

    return 0;
}

