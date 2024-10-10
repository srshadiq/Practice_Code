#include<bits/stdc++.h>
using namespace std;

int main()
{
    tuple<int,string,double> tx;
    tx=make_tuple(100,"Kamal",3.5);
    cout<<"int data: "<<get<0>(tx)<<endl;
    cout<<"string data: "<<get<1>(tx)<<endl;
    cout<<"double data: "<<get<2>(tx)<<endl;
    get<2>(tx)=3.7;

    tuple<int,string,double> bx;
    get<0>(bx)=get<0>(tx);
    get<1>(bx)=get<1>(tx);
    get<2>(bx)=get<2>(tx);
    
    tuple<int,string,double> ax;
    bx.swap(ax);
    cout<<"int data: "<<get<0>(ax)<<endl;
    cout<<"string data: "<<get<1>(ax)<<endl;
    cout<<"double data: "<<get<2>(ax)<<endl;
    return 0;
}