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
    cin>>n;
    seive();
    if(isPrime[n]){
        if(isPrime[n+2]){
            cout<<n<<" and "<<n+2<<" are twin primes."<<endl;
        }
        else{
            cout<<n<<" and  "<<n+2<<" are not twin primes."<<endl;
        }
    }
    else{
            cout<<n<<" is not prime."<<endl;

    }

    return 0;
}