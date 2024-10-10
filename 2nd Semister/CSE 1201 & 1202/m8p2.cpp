#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
        int data;
        Tree *left;
        Tree *right;
        Tree(int a){
            data=a;
            left=NULL;
            right=NULL;
        }
};
// void PreOrder(Tree *root){
//     if(root!=NULL){
//         cout<<root->data<<' ';
//         PreOrder(root->left);
//         PreOrder(root->right);
//     }
// }
// void PostOrder(Tree *root){
//     if(root!=NULL){
//         PostOrder(root->left);
//         PostOrder(root->right);
//         cout<<root->data<<' ';
//     }
// }
// void InOrder(Tree *root){
//     if(root!=NULL){
//         InOrder(root->left);
//         cout<<root->data<<' ';
//         InOrder(root->right);
//     }
// }
void process(Tree *ptr){
    cout<<ptr->data<<' ';
}
void StackPreOrder(Tree *root){
    int top=0,n=7;
    Tree *Stack[7];
    Stack[0]=NULL;
    Tree *ptr=root;
    while (ptr!=NULL)
    {
        process(ptr);
        if(ptr->right!=NULL){
            top=top+1;
            Stack[top]=ptr->right;
        }
        if(ptr->left!=NULL){
            ptr=ptr->left;
        }
        else{
            ptr=Stack[top];
            top=top-1;
        }
    }
    
}
void StackInOrder(Tree *root){
    int top=0;
    Tree *Stack[7];
    Stack[0]=NULL;
    Tree *ptr=root;
    while(ptr!=NULL){
        top++;
        Stack[top]=ptr;
        ptr=ptr->left;
    }
    do{
        ptr=Stack[top];
        top--;
        process(ptr);
        if(ptr->right!=NULL){
            top++;
            Stack[top]=ptr->right;
            ptr=ptr->right;
        }
        while(ptr->left!=NULL){    
            top++;
            Stack[top]=ptr->left;
            ptr=ptr->left;
        }
    }while(top>0);
}
void stackPostOrder(Tree *root){
    int top=0;
    Tree *Stack[7];
    Stack[0]=NULL;
    Tree *ptr=root;
    while(ptr->data>0){
        while(ptr!=NULL){
            top=top+1;
            Stack[top]=ptr;
            if(ptr->right!=NULL){
                top=top+1;
                Stack[top]=ptr->right;
            }
            ptr=ptr->left;
        }
        ptr=Stack[top];
        top=top-1;
        while(ptr->data>0){
            process(ptr);
            ptr=Stack[top];
            top=top-1;
        }
        // if(ptr->data<0){
        //     ptr=ptr-1;
        // }
        // else{
        //     break;
        // }
    }
}
int main(){
    Tree *root=new Tree(1);
    root->left= new Tree(2);
    root->right= new Tree(3);
    root->left->left=new Tree(4);
    root->left->right=new Tree(5);
    root->right->left=new Tree(6);
    root->right->right=new Tree(7);
    cout<<"Printing in Preorder: ";
    // PreOrder(root);
    // cout<<endl;
    // cout<<"Printing in Postorder: ";
    // PostOrder(root);
    // cout<<endl;
    // cout<<"Printing in Inorder: ";
    // InOrder(root);
    // cout<<endl;
    StackPreOrder(root);
    cout<<endl;
    cout<<"Printing in Inorder: ";
    StackInOrder(root);
    cout<<endl;
    stackPostOrder(root);
    return 0;
}