#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n, char from, char to, char aux){
    if(n==1){
        cout<<"Disc move from "<<from<<" to disc "<<to<<endl;
        return;
    }
    tower_of_hanoi(n-1,from,aux,to);
    cout<<"Disc move from "<<from<<" to disc "<<to<<endl;
    tower_of_hanoi(n-1,aux,to,from);
}     
      
int main(){
    int n;
    cout<<"Enter number of disc :";
    cin>>n;
    tower_of_hanoi(n,'A','B','C');  
    return 0;
}