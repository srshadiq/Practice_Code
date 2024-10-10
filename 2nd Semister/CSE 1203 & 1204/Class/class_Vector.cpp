#include<bits/stdc++.h>
using namespace std;

void display(vector<int>bx)
{
    cout<<"list=";
    for(auto i:bx)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> ax;
    vector<int>::iterator p;
    ax.push_back(10);
    ax.push_back(20);
    ax.push_back(30);
    cout<<"size="<<ax.size()<<endl;
    p=ax.begin();
    cout<<"p="<<&p<<" "<<*p<<endl;
    ax.insert(p+1,50);
    for (int i = 0; i < ax.size(); i++)
    {
        if(ax[i]==20)
        {
            cout<<"i="<<i<<endl;
            ax.insert(p+i,70);
            break;
        }
    }
    
    display(ax);
    ax.pop_back();
    display(ax);
    for (int i = 0; i < ax.size(); i++)
    {
        if(ax[i]==20)
        {
            cout<<"i="<<i<<endl;
            ax.erase(p+i);
            break;
        }
    }
    display(ax);
    sort(ax.begin(),ax.end());
    display(ax);
    sort(ax.rbegin(),ax.rend());
    display(ax);

    return 0;
}