#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int n=s.length();
    int flag=0,x=0;
    for (int i = 0; i < n/2; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            x++;
        }
    }
    if(x==1||(x==0&&n%2==1)){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;

    }

    return 0;
}