#include<bits/stdc++.h>
using namespace std;

void display(vector<string> bx)
{
    for(auto x:bx)
    {
        cout<<x<<" ";
    }
}
int main()
{
    vector<string> ax;
    ax.push_back("Japan");
    ax.push_back("Bangladesh");
    // cout <<ax[0]<<endl;
    // cout <<ax[1]<<endl;
    display(ax);
    cout <<endl;
    ax.pop_back();
    display(ax);
    return 0;
}