#include<bits/stdc++.h>
using namespace std;

string Base_Convert(int n,int b)
{
    if(n==0)return "0";
    int x=0;
    int power=1;
    while(power*b<=n)
    {
        power*=b;
        x++;
    }
    string s;
    while(n>0)
    {
        int k=n/power;
        s+=k+'0';
        n-=k*power;
        power/=b;
    }
    return s;
}
int main()
{
    int n,b;
    cout<<"Enter Decimal and Base: ";
    cin>>n>>b;
    string s=Base_Convert(n,b);
    cout<<s<<endl;

}

