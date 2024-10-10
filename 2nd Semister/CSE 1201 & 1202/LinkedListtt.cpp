#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
};
node *h;
class Linkedlist{
    public:
        void create(int n)
        {
            node *p,*q;
            int x;
            h=NULL; q=NULL;
            for (int i = 0; i < n; i++)
            {
                p=new node();
                cout<<"Enter X: ";
                cin>>x;
                p->data=x;
                if(h==NULL)
                    h=p;
                if(q!=NULL)
                    q->next=p;
                q=p;
            }
            q->next=NULL;
        }
        void display()
        {
            node *p;
            p=h;
            cout<<"The list is: ";
            while(p!=NULL)
            {
                cout<<p->data<<"-->";
                p=p->next;
            }
            cout<<endl;
        }
        void insert()
        {
            node *p,*q;
            int x,y,flag=0;
            q=h;
            cout<<"After which element: ";
            cin>>y;
            while(q!=NULL)
            {
                if(q->data==y)
                {
                    p=new node();
                    cout<<"Enter data: ";
                    cin>>x;
                    p->data=x;
                    p->next=q->next;
                    q->next=p;
                    flag=1;
                    break;
                }
                else
                {
                    q=q->next;
                }
            }
            if(flag==0)
            {
                cout<<"Sorry node not found."<<endl;
            }
        }
        void Delete()
        {
            node *p,*q;
            int y,flag=0;
            q=h; p=NULL;
            cout<<"Delete which element: ";
            cin>>y;
            while(q!=NULL)
            {
                if(q->data==y)
                {
                    if(q==h)
                        h=h->next;
                    else
                        p->next=q->next;
                    flag=1;
                    break;
                }
                else
                {
                    p=q;
                    q=q->next;
                }
            }
            if(flag==0)
            {
                cout<<"Sorry  node not found"<<endl;
            }
        }
};
int main()
{
    Linkedlist ll;
    ll.create(5);
    ll.display();
    ll.insert();
    ll.display();
    ll.Delete();
    ll.display();
    
    return 0;
}