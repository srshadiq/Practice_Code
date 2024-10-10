#include<bits/stdc++.h>
using namespace std;

int main()
{
    int info[]={0,0,201,402,325,101,301,251,0,0,385,0};
    int link[]={0,0,7,0,10,2,4,6,0,0,3,0};
    int start=5,loc;
    int *ptr=&start;
    int item;
    cin >>item;
    while(*ptr!=0)
    {
        if(item==info[*ptr])
        {
            loc=*ptr;
            break;
        }
        else{

            *ptr=link[*ptr];
        }

    }
    if(loc!=0)
    {
        cout <<loc+1<<endl;
    }
    else{
        cout <<"Search is unsuccessful"<<endl;
    }
    return 0;
}