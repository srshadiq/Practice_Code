#include<bits/stdc++.h>
using namespace std;

const int N=1e6+9;
bool isPrime[N];
vector<int> prime;
void seive(){
    for (int i = 2; i < N ; i++)
    {
        isPrime[i]=true;
    }
    for (int i = 2; i*i < N ; i++)
    {
        for (int j = i*i; j < N ; j+=i)
        {
            isPrime[j]=false;
        } 
    }
    for (int i = 2; i <N ; i++)
    {
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    seive();
    for (int i = 0; i < n/2 ; i++)
    {
        int a=prime[i];
        int b=n-a;
        if(isPrime[b] and b>=a){
            cout<<a<<" "<<b<<endl;
            break;
        }
    }
    




    return 0;
}