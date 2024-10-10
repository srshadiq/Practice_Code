#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e4+7;
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
        int m,n;
        int ans=1e9;
        cin>>m>>n;
        for(auto p: prime){
            if(p>m) break;
            if(m%p==0){
                int e=0;
                while(m%p==0){
                    e++;
                    m/=p;
                }
                int k=0;
                for (int i = 1; i <=n; i++)
                {
                    int x=i;
                    while(x%p==0){
                        k++;
                        x/=p;
                    }
                }
                ans=min(ans,k/e);

            }
        } 
        cout<<"Case "<<++cs<<":"<<endl;
        if(ans==0){
            cout<<"Impossible to divide"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        
    }
    return 0;
}