#include<bits/stdc++.h>
using namespace std;

const int n=7;
int STACK[n];
int top=-1;
void push(int x)
{
    if(top==n-1)
    {
        cout<<"Stack is overflow"<<endl;
        return;
    }
    STACK[++top]=x;
    cout<<"Push Successful "<<x<<endl;
}
void display()
{
    cout<<"Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    top=top-1;
    cout<<"Pop Successful"<<endl;
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();

    return 0;
}