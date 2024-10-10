// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int stack[10]={};
//     int top=5;
//     if(top==0)
//     {
//         cout<<"UNDERFLOW"<<endl;
//         return 0;
//     }


//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int POP(int top){
    if(top==0){
        cout<<"UNDERFLOW\n";
    }
    cout<<"Delete done\n";
    return top=top-1;
}
int main(){
    int Stack[7]={2,1,4,3,5,6,7};
    int top=6;
    top=POP(top);
    //cout<<top<<endl;
    for(int i=top;i>=0;i--){
        cout<<Stack[i]<<endl;
    } 
    return 0;
}