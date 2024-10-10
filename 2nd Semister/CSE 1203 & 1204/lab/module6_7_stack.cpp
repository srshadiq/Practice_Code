#include<bits/stdc++.h>
using namespace std;
stack<int> ax;
int menu()
{
    cout<<"--Stack Menu--"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"   Enter your option: ";
    int op;
    cin>>op;
    return op;
}

void push()
{
    int x;
    if(ax.size()<10)
    {
    cout<<"Enter your item: ";
    cin>>x;
    ax.push(x);
    cout<<"\nPush successfull"<<endl;
    }
    else
    {
        cout<<"sorry stack is full"<<endl;
    }
}

void pop()
{
    if(!ax.empty())
    {
        ax.pop();
        cout<<"\nPop successfull"<<endl;
    }
    else
        cout<<" sorry stack is enpty"<<endl;
}

void display(stack <int> bx)
{
    cout<<"Stack"<<endl;
    while(!bx.empty())
    {
        cout<<bx.top()<<endl;
        bx.pop();
    }
}

int main()
{
    int op;
    for(;;)
    {
        op=menu();
        if(op==4)break;
        switch(op)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display(ax);break;
        }
    }

    return 0;
}