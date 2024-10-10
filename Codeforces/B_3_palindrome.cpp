#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        if(i%4==0)
        {
            s.push_back('a');
        }
        
        else if(i%4==1)
        {
            s.push_back('a');
        }
        
        else if(i%4==2)
        {
            s.push_back('b');
        }
        
        else if(i%4==3)
        {
            s.push_back('b');
        }

    }
    cout<<s<<endl;
    

    return 0;
}