#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node *left;
    Node *right;
        Node(char data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};      
void postorder(Node *root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}      
int main(){
    Node *root=new Node('a'); 
    Node *child1=new Node('b'); 
    Node *child2=new Node('c'); 
    Node *child3=new Node('d'); 
    Node *child4=new Node('e'); 
    root->left=child1;
    child1->right=child3;
    root->right=child2;
    child2->left=child4;
    postorder(root);
    return 0;
}