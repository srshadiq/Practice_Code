#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
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
            q->next=0;
            
        }
        void display()
        {
            node *p;
            p=h;
            cout<<"The list is: ";
            while(p!=0)
            {
                cout<<"-->"<<p->data;
                p=p->next;
            }
        }
};
int main()
{
    Linkedlist ll;
    ll.create(4);
    ll.display();

    return 0;
}