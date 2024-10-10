#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N= 1e6+9;
bool prime[N];
void seive(){
    prime[1]=true;
    for (int i = 2; i*i < N; i++)
    {
        if(!prime[i]){
            for (int j = i*i; j <=N; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    
}
bool divideByZero(int n){
    while(n){
        if(n%10==0){
            return true;
        }
        n/=10;
    }
    return false;
}
bool checkSuffix(int n){
    string s=to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        string suffix=s.substr(i);
        int x=stoi(suffix);
        if(prime[x]){
            return false;
        }
    }
    return true;
    
}
bool isValid(int n){
    if(prime[n]){
        return false;
    }
    if(divideByZero(n)){
        return false;
    }
    if(!checkSuffix(n)){
        return false;
    }
    return true;


}
bool Valid[N];
int Count[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    for (int i = 1; i < N; i++)
    {
        Valid[i]=isValid(i);
    }
    for (int i = 1; i < N; i++)
    {
        Count[i]=Count[i-1]+Valid[i];
    }
    

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<Count[n]<<'\n';
    }
    // cout<<prime[10]<<'\n';
    return 0;
}