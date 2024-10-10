#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<int> div;
        for (int i = 1; i*i <=n; i++)
        {
            if(n%i==0){
                div.push_back(i);
                if(i!=n/i){
                    div.push_back(n/i);
                }
            }
        }
        // sort(div.begin(),div.end());
        int count=0;
        for (int i = 0; i < div.size(); i++)
        {
            if(div[i]<=a){
                for (int j = 0; j < div.size(); j++)
                {
                    if(div[j]<=b){
                        if(n%(div[i]*1LL*div[j])==0){
                            int z=n/(div[i]*div[j]);
                            if(z<=c){
                                count++;
                            }
                        }
                    }
                }
                
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}