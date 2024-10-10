#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    string x;
    x=s;
    int n=x.length();
    reverse(x.begin(),x.end());
    string z=s+x;
    cout <<z<<endl;

    return 0;
}