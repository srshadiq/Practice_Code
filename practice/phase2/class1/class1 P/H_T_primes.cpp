#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6 + 9;

bool is_prime[N];
void sieve() {
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        int count=0;
        int k=sqrtl(x);
        while (1LL * k * k < x) ++k;
        while (1LL * k * k > x) --k;
        if(1LL*k*k==x){
            if(is_prime[k]){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    

    return 0;
}