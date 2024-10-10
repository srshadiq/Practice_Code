#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={2,3,4};
    int maxstk=6;
    int top=3;
    if(top==maxstk){
        cout<<"OVERFLOW\n";
    }
    else{
        cout<<"Enter value: ";
        int x;
        cin>>x;
        arr[top]=x;
        top=top+1;
    }
    cout<<"Stack is: "<<endl;
    for(int i=top-1;i>=0;i--){
        cout<<"Elements on index "<<i<<" is: "<<arr[i]<<endl;
    }
    return 0;
}