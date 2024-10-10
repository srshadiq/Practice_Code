#include<bits/stdc++.h>
using namespace std;
const int n=10;
int DEQUEUE[n];
int front=-1;
int rear=-1;     

void insert(int x){
    if((front==0 && rear ==n-1) || (front==rear+1)){
        cout<<"Dequeue is full"<<endl;
        return;
    }
    if(front==-1 &&rear==-1) front=rear=0;
    else if( rear==n-1) rear=0;
    else rear=rear+1;
    
    DEQUEUE[rear]=x;
}
void display(){
    cout<<"Dequeue data : ";
    for (int i = front; i<=rear; i++)
    {
        cout<<DEQUEUE[i]<<"  ";
    }
    cout<<endl;
}
void delet(){
    if(front==-1 && rear==-1){
        cout<<"Dequeue is already empty"<<endl;
        return;
    }
    if(front == rear) front=rear=-1;
    else if(rear==0 ) rear=n-1;
    else rear--;
    cout<<"Data delet succesfully"<<endl;
}

int main(){
    delet();
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);
    display();

    delet();
    display(); 
    return 0;
}