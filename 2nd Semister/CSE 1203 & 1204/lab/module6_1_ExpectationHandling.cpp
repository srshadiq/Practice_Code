#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int ax[5]={10,20,60,40,30}; 
    cout<<"enter index:"; 
    cin>>i; 
    try
    {
        if(i<=5&&i>=0)
        {
            throw(i);
        }        
        if(i>5||i<0)
        {
            throw("Out of Range Error");
        }
    }
    catch(int x)
    {
        cout<<"ax["<<i<<"]="<<ax[x]<<endl; 
    }
    catch(char const c[])
    {
        cout<<c<<endl;
    }
    catch(...)
    {
        cout<<"Does not match."<<endl;
    }
    return 0;
}