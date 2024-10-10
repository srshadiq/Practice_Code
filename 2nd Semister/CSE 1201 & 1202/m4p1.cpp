#include<bits/stdc++.h>
using namespace std;

int main()
{
    char info[13]="  UECRTE  S ";
    int link[13]={0,0,7,0,10,2,4,6,0,0,3,0};
    int start=5;    
    while(start!=0)
    {
        cout <<info[start]<<" ";
        start=link[start];
    }
    return 0;
}