#include<bits/stdc++.h>
using namespace std;

int And(int p,int q)
{
    int x;
    x=p&q;
    return x;
}
int Xor(int p,int q)
{
    int x;
    x=p^q;
    return x;
}
int main()
{
    cout<<"P"<<"  "<<"Q"<<"  "<<"R"<<"  "<<"p(+)(Q^R)"<<endl;
    for (int p = 0; p <= 1; p++)
    {
        for (int q = 0; q <= 1; q++)
        {
            for (int r = 0; r <= 1; r++)
            {
                cout<<p<<"  "<<q<<"  "<<r<<"  "<<Xor(p,And(q,r))<<endl;;
            }
            
        }
        
    }

    return 0;
}