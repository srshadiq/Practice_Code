#include<bits/stdc++.h>
using namespace std;

vector<int> v;
void primeFactor(int n){
    for (int i = 2; i*i <= n; i++)
    {
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1) v.push_back(n);
    for(auto x: v) cout<<x<<" ";
}
int main()
{
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}