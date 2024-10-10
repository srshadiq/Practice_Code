#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>px;
    px=make_pair(10,"Rajshahi");
    cout<<px.first<<endl;
    cout<<px.second<<endl;
    get<0>(px)=20;

    pair<int,string>bx;
    bx.first=px.first;
    bx.second=px.second;

    pair<int,string>ax;
    bx.swap(ax);
    cout<<ax.first<<endl;
    cout<<ax.second<<endl;
    
    return 0;
}