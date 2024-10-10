#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    char data;
    Node* next;
};
Node *head;
void insertAfter(char new_data){
    Node *new_node= new Node();
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
int main(){
    head = NULL;
    char info[13]="  UECRTE  S ";
    int link[12]={9,-1,7,-1,10,2,4,6,0,11,3,1};
    int start=5;
    char item='K';
    int avil=8;
    int NEW=avil;
    avil=link[avil];
    info[NEW]=item;
    link[NEW]=start;
    start=NEW;
    while(start!=-1){
        insertAfter(info[start]);
        start=link[start];
    }
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data;
        current_node=current_node->next;
    }
    return 0;
}