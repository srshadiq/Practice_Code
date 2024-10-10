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
            int x;
            h=NULL;
            q=h;
            for (int  i = 0; i < n; i++)
            {
                p=new Node();
                cout<<"Enter data :";
                cin>>x;
                p->data=x;
                if(h==NULL) h=p;
                else q->next=p;
                q=p;
            }
            q->next=0;
        }
        void display(){
            Node *p;
            p=h;
            cout<<"Linked List here : ";
            while(p!=0){
                cout<<"--> "<<p->data;
                p=p->next;
            }
            cout<<endl;
        }
        void insert(int x){
            Node *p,*q;
            int y,flag=0;
            q=h;
            cout<<"After which element you want to insert data: ";
            cin>>y;
            while(q!=0){
                if(q->data==y){
                    p=new Node();
                    p->data=x;
                    p->next=q->next;
                    q->next=p;
                    flag=1;
                    cout<<"Data inserted "<<endl;
                    break;
                }
                else q=q->next;
            }
            if(flag==0) cout<<"Data not inserted "<<endl;
        }
        void delet(int x){
            Node *p,*q;
            int flag=0;
            q=h;
            p=NULL;
            while(q!=NULL){
                if(q->data==x){
                    if(q==h) h=h->next;
                    else{
                        p->next=q->next;
                        flag=1;
                        cout<<"Data deleted "<<endl;
                        break;
                    }
                }
                else{
                    p=q;
                    q=q->next;
                }
            }
            if(flag==0) cout<<"Data not found"<<endl;
        }
};
int main(){
    Linkedlist l;
    l.creat(4);
    l.display(); 
    l.insert(30);
    l.display();  
    l.delet(25);
    l.display();
    
    return 0;
}