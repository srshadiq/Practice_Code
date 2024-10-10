#include<bits/stdc++.h>
using namespace std;

int legendre(long long n, long long p) {
  int ans = 0;
  while (n) {
    ans += n / p;
    n /= p;
  }
  return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,p;
  cin>>n>>p;
  int ans1=legendre(n,2);
  int ans2=legendre(n,5);
  cout<<ans1<<" "<<ans2<<endl;
  return 0;
}