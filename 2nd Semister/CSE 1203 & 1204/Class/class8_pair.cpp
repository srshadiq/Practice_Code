#include<bits/stdc++.h>
using namespace std;

int main()
{
    // pair <int,int> a;
    // pair <int,string> a[10];
    // array<pair <int,string>,10>a; 
    // a=make_pair(1,5);
    // a[0].first=10;
    // a[0].second="john";
    // cout <<"a("<<a[0].first<<","<<a[0].second<<")"<<endl;


    // pair <int,pair <int,int>>a;
    // a.first=1;
    // a.second.first=2;
    // a.second.second=5;
    // cout <<"a("<<a.first<<",("<<a.second.first <<","<< a.second.second<<"))"<<endl;

    pair <int,int> a,b;
    a.first=1;
    a.second=2;
    b.first=10;
    b.second=20;
    a.swap(b);
    cout <<a.first<<" "<<a.second<<endl;
    cout <<b.first<<" "<<b.second<<endl;

    // tuple<int,string,float>t;
    // t=make_tuple(1,"John", 500.5);
    // get<1>(t)="smith";
    // cout <<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;

    
    int x;string y;float z=0;
    tuple<int,string,float>t;
    t=make_tuple(1,"John", 500.5);
    // tie(x,y,z)=t;
    tie(x,y,ignore)=t;
    cout <<x<<" "<<y <<" "<<z<<endl;

    return 0;
}