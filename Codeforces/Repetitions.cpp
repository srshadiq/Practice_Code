#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int n=s.size();
    int x=1,max=1;
    for (int i = 0; i < n-1 ; i++)
    {
        if(s[i]==s[i+1])
        {
            x++;
        }
        if(x>max)
        {
            max=x;
        }
        if(s[i]!=s[i+1])
        {
            x=1;
        }
    }
    cout <<max<<endl;

    return 0;
}