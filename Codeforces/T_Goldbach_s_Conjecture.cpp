#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e7+7;
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
    for (int i = 2; i < N; i++)
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
    int t,cs=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(auto p: prime){
            int b=n-p;
            if(p>b) break;
            if(!primes[b]){
                ans++;
            }
        }
        cout<<"Case "<<++cs<<": "<<ans<<'\n';
    }
    return 0;
}