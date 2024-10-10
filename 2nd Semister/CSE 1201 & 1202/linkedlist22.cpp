#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};      
Node *h;
class Linkedlist{
    public:
    void creat(int n){
    Node *p,*q;
    int i,x;
    h=NULL;
    q=NULL;
    for ( i = 0; i <n; i++)
    {
        p=new Node();
        cout<<"Enter data: ";
        cin>>x;
        p->data=x;
        if(h==NULL) h=p;
        if(q!=NULL) q->next=p;
        q=p;
    }
    q->next=0;
}
    void display(){
        Node *p;
        p=h;
        cout<<"\nLinked list here:\n";
        while(p!=0){
            cout<<"->"<<p->data;
            p=p->next;
        }
        cout<<endl;
    }
    void insert(int x){
        Node *p,*q;
        int y,flag=0;
        q=h;
        cout<<"After which data :";
        cin>>y;
        while(q!=0){
            if(q->data==y){
                p=new Node();
                p->data=x;
                p->next=q->next;
                q->next=p;
                flag=1;
                break;
            }
            else q=q->next;
        }
        if(q==0) cout<<"Data not found"<<endl;
        else cout<<"Data inserted succesfully"<<endl;
    }
    void delet(int x){
        Node *p,*q;
        int y,flag=0;
        q=h;
        p=NULL;
        while(q!=NULL){
            if(q->data==x){
                if(q==h) h=h->next;
            else{
                p->next=q->next;
                flag=1;
                break;
            }
        }
            p=q;
            q=q->next;
        }
        if(q==0) cout<<"Data not found"<<endl;
        else cout<<"Data deleted succesfully"<<endl;
    }
};
      
int main(){
    Linkedlist l1;
    l1.creat(4);
    l1.display();
    l1.insert(10);
    l1.insert(20);
    l1.display();
    l1.delet(10);
    l1.display();
    return 0;
}