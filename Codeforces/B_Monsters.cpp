#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,k;
        cin >>n >>k;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector <int> ans;
        vector <pair <int,int>> p;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%k==0)
            {
                ans.push_back(i+1);
            }
            else
            {
                p.push_back({a[i]%k,i+1});
            }
        }
        sort(p.begin(),p.end(),[&](pair<int,int>x,pair<int,int>y){
            if(x.first==y.first){
                return (x.second<y.second);
            }
            return (x.first>y.first);
            });
         sort(p.begin(),p.end());
        for(auto i:p)
        {
            ans.push_back(i.second);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] <<" ";
        }
        cout << endl;
        
        
    }
    return 0;
}