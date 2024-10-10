#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1,0);
        int ct=0; 
        for (int i = 0; i <n-1 ; i++)
        {
            int u,v;
            cin>>u>>v;
            a[u]++;
            a[v]++;
        } 
        for (int i = 1; i <=n; i++)
        { 
            if(a[i]==1){
                ct++;
            }
        }
        cout<<ceil(ct/2.0)<<endl;
    }
    return 0;
}