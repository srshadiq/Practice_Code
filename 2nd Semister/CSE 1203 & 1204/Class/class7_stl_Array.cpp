#include<bits/stdc++.h>
#include<array>
using namespace std;
// template<typename T>

int main()
{
    // int ax[5]={1,2,3,4,5};
    array<int,5> ax;
    ax={10,20,30,40,50};
    // for (int i = 0; i < ax.size(); i++)
    // {
    //     cout <<ax[i]<<" ";
    // }
    ax.at(1)=100;
    // ax.at(5)=500;
    for(int x:ax)
    {
        cout <<x<<" ";
    }

    return 0;
}