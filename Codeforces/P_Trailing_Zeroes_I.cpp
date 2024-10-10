#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e6+9;
bool primes[N];
vector<int> prime;
void seive(){
    primes[1]=true;
    for (int i = 2; i*i <=N; i++)
    {
        if(!primes[i]){
            for (int j = i*i; j <=N; j+=i)
            {
                primes[j]=true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if(!primes[i]){
            prime.push_back(i);
        }
    }
    
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll n;
        cin>>n;
        // vector<ll> v;
        ll ans=1;
        for(auto x: prime){
            if(1LL*x*x>n) break;
            int p=0;
            while (n%x==0)      
            {
                p++;
                n/=x;
            }
            ans*=p+1;
            
        }
        if(n>1){
            ans*=2;
        }

        // for(auto x:prime) cout<<x<<' ';
        
        // for(auto x: v) cout<<x<<' ';
        cout<<"Case "<<i<<": "<<ans-1<<'\n';
        
    }
    return 0;
}