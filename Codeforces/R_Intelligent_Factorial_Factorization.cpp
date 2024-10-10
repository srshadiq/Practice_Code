#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const  int  N=1e6+9;
bool primes[N];
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
        vector<int> v,v1,v2;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
            if(!primes[i]){
                v2.push_back(i);
            }
        }
        for (int i = 0; i <v2.size(); i++)
        {
            int p=0;
            for (int j = 0; j <n; j++)
            {
                while(v[j]%v2[i]==0){
                    v[j]/=v2[i];
                    p++;
                }
            }
            v1.push_back(p);
        }
        cout<<"Case "<<++cs<<": "<<n<<" = ";
        for (int i = 0; i < v2.size(); i++)
        {
            if(i!=v2.size()-1){
                cout<<v2[i]<<" ("<<v1[i]<<") * ";
            }
            else{
                cout<<v2[i]<<" ("<<v1[i]<<")";
            }
        }
        
        cout<<'\n';
        
    }
    return 0;
}