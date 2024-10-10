#include<bits/stdc++.h>
using namespace std;

void display(array<int,5> bx)
{
    for(auto x:bx)
    cout <<x<<" ";
}
int main()
{
    array<int,5> ax;
    ax.fill(7);
    display(ax);
    return 0;
}