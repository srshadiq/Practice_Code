#include<bits/stdc++.h>
using namespace std;

int Factor(int n){
    int seive[n];
    int cout=0;
    vector<int>sieve(n,0);
    for(int i=2;i<=n;i++){
            if (sieve[i]) continue;
            for (int j = 2*i; j <= n; j += i) {
                sieve[j] = i;
            }

        }
        for(int i=0;i<=n;i++){
            cout<<sieve[i]<<" ";
            if(sieve[i]!=0){
                cout++;
            }
        }
        return cout;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int x=Factor(12);
        cout<<endl;
    }

    return 0;
}

