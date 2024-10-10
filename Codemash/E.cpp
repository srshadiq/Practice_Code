
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>c;
    cin>>b>>d;
    int flag=1;
    for(int i=1;i<=9;i++)
    {
        if(c==i)
        {
            if((b==9-i+1)||(d==9-i+1)){
            flag=0;
            }
        }
    }
    if(flag==0){
        cout<<"No"<<endl;

    }
    else{
        cout<<"Yes"<<endl;
    }

    return 0;
}

