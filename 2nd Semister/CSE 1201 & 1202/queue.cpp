#include<bits/stdc++.h>
using namespace std;
const int n=10;
int QUEUE[n];
int front=-1,rear=-1;

void insert(int x){
    if(rear==n-1){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        rear++;
    }
    QUEUE[rear]=x;
    cout<<"Push data successfully"<<endl;
}
void display(){
    cout<<"Queue data : ";
    for (int i = front; i<=rear; i++)
    {
        cout<<QUEUE[i]<<"  ";
    }
    cout<<endl;
}
void delet(){
    if(front==-1 && rear==-1){
        cout<<"Queue underflow"<<endl;
        return;
    }
    else if(front ==rear){
        front=rear=-1;
    }
    else front++;
    cout<<"Pop successfully"<<endl;
}

int main(){
    delet();
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);
    insert(35);
    display();  
    delet();
    display();  
    return 0;
}