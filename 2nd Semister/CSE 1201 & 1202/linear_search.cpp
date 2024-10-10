#include<bits/stdc++.h>
using namespace std;
           
int main(){
    int n,element,c;
    cout<<"Enter element total number :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements:"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Element to be found : ";
    cin>>element;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==element){
            cout<<"Element has found at index :"<<i<<endl;
            c=1;
            break;
        }
        c=0;
    }
    if(c==0) cout<<"Element not found"<<endl; 
      
    return 0;
}