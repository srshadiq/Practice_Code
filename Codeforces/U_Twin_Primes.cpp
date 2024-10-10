#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=2e7+7;
bool isPrime[N];
vector<int> prime;
void seive(){
    isPrime[1]=true;
    for (int i = 2; i*i <=N; i++)
    {
        if(!isPrime[i]){
            for (int j = i*i; j <=N; j+=i)
            {
                isPrime[j]=true;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if(!isPrime[i]){
            prime.push_back(i);
        }
    }
    
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    vector<pair<int,int>> vp;
    for (int i = 0; i < prime.size()-1; i++)
    {
        if(prime[i]+2==prime[i+1]){
            vp.push_back(make_pair(prime[i],prime[i+1]));
        }
    }
    int n;
    while(cin>>n){
    cout<<"("<<vp[n-1].first<<", "<<vp[n-1].second<<")"<<'\n';
    }
    // cout<<prime.size()<<'\n';

    

    return 0;
}