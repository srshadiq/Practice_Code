#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class singly
{
    private:
        node *tail,*head;
    public:
        singly()
        {
            head=NULL;
            tail=NULL;
        }
        void create(int value)
        {
            node *temp=new node;
            temp->data=value;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
                tail=temp;
                temp=NULL;
            }
            else
            {
                tail->next=temp;
                tail=temp;
            }
        }
        void display()
        {
            node *temp=new node;
            temp=head;
            while(temp!=NULL)
            {
                cout << temp->data<<endl;
                temp=temp->next;
            }
        }
};
int main()
{
    singly s1=singly();
    s1.create(2);
    s1.create(3);
    s1.create(4);
    s1.create(5);
    s1.create(6);
    s1.display();

    return 0;
}