#include<bits/stdc++.h>
#include<array>
using namespace std;

void display(array<int,5> bx)
{
    cout<<"ax= ";
    for(auto x:bx)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    array <int,5> ax;
    ax={10,60,30,70,20};
    display(ax);
    cout<<"Third element: "<<ax.at(2)<<endl;
    cout<<"First element: "<<ax.front()<<endl;
    cout<<"Last element: "<<ax.back()<<endl;
    ax.fill(10);
    if(ax.empty())
    {
        cout<<"ax is empty."<<endl;
    }
    else
    {
        cout<<"ax is not empty."<<endl;
    }
    cout<<"Size of ax: "<<ax.size()<<endl;
    cout<<"Maximum size of ax: "<<ax.max_size()<<endl;
    cout<<"Address of first element of ax: "<<ax.begin()<<endl;
    cout<<"Address of last element of ax: "<<ax.end()<<endl;
    display(ax);
    return 0;
}