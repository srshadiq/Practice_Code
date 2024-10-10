#include<bits/stdc++.h>
using namespace std;

using ll=long long;
const ll MAX=1e18;
int main()
{
    vector<ll> v;
    ll p2=1;
    for (int i = 0; p2<=MAX; i++,p2*=2)
    {
        ll p3=1;
        for (int j = 0;p2*p3<=MAX; j++,p3*=3)
        {
            ll p5=1;
            for (int k = 0; p2*p3*p5<=MAX; k++,p5*=5)
            {
                v.push_back(p2*p3*p5);
            }
            
        }
        
    }
    sort(v.begin(),v.end());
    // cout<<v.size()<<endl;
    cout << "The 1500'th ugly number is " << v[1500 - 1] << "."<<endl;




    return 0;
}