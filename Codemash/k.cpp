#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int five=0,four=0;
        while(n%4!=0){
            n=n-5;
            five++;
        }
        int x=n/4;
        for(int i=0;i<x;i++){
            cout<<4<<" ";
        }
        for(int i=0;i<five;i++){
            cout<<5<<" ";
        }
        cout<<endl;

    }
    return 0;
}
