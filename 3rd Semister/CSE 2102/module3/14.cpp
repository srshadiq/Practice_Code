#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
       
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<"Number "<<n<<" is Prime"<<endl;
    }
    else{
        cout<<"Number "<<n<<" is not Prime"<<endl;
    }



    return 0;
}