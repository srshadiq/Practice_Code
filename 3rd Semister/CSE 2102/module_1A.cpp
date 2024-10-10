#include<bits/stdc++.h>
using namespace std;

int And(int p,int q)
{
    int x;
    x=p&q;
    return x;
}
int Or(int p,int q)
{
    int x;
    x=p|q;
    return x;

}
int Xor(int p,int q)
{
    int x;
    x=p^q;
    return x;
}
int Conditional(int p,int q)
{
    if(p==0 && q==0) return 1;
    else if(p==0 && q==1) return 1;
    else if(p==1 && q==0) return 0;
    else if(p==1 && q==1) return 1;
}
int BiConditional(int p,int q)
{
    int x,y,z;
    x=Conditional(p,q);
    y=Conditional(q,p);
    z=x&&y;
    return z;
}

int main()
{
    // int p,q;
    // cout<<"P    Q   !P      !Q      P^Q     PvQ     P xor Q      conditional(P,Q)     Biconditional(P,Q)"<<endl;
    // p=0;
    // q=0;
    // cout<<p<<"    "<<q<<"   "<<!p<<"       "<<!q<<"       "<<And(p,q)<<"       "<<Or(p,q)<<"       "<<Xor(p,q)<<"            "<<Conditional(p,q)<<"                  "<<BiConditional(p,q)<<endl;
    // p=0;
    // q=1;
    // cout<<p<<"    "<<q<<"   "<<!p<<"       "<<!q<<"       "<<And(p,q)<<"       "<<Or(p,q)<<"       "<<Xor(p,q)<<"            "<<Conditional(p,q)<<"                  "<<BiConditional(p,q)<<endl;
    // p=1;
    // q=0;
    // cout<<p<<"    "<<q<<"   "<<!p<<"       "<<!q<<"       "<<And(p,q)<<"       "<<Or(p,q)<<"       "<<Xor(p,q)<<"            "<<Conditional(p,q)<<"                  "<<BiConditional(p,q)<<endl;
    // p=1;
    // q=1;
    // cout<<p<<"    "<<q<<"   "<<!p<<"       "<<!q<<"       "<<And(p,q)<<"       "<<Or(p,q)<<"       "<<Xor(p,q)<<"            "<<Conditional(p,q)<<"                  "<<BiConditional(p,q)<<endl;

    // int p,q,r,x,y;
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
    
    // cout<<y<<endl;
}
