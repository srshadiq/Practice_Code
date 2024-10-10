#include<bits/stdc++.h>
using namespace std;
class stackk{
int arr[10];
int top=-1;
public:
    void push(int x){
        if(top<9){
            top=top+1;
            arr[top]=x;
            cout<<"data push successfully\n";
        }
        else{
            cout<<"Stack is full\n";
        }
    }
    void pop(){
        if(top>=0){
            cout<<"pop has done. poped data="<<arr[top]<<endl;
            top=top-1;
        }
        else cout<<"stack is empty\n";
    }
    void display(){
        if(top<0) cout<<"stack is empty\n";
        else{
            for (int i = top; i>=0; i--)
            {
                cout<<arr[i]<<endl;
            }          
        }
    }
};

int main(){
    stackk s;
    s.push(5);
    s.push(15);
    s.push(20);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.display();

    return 0;
}