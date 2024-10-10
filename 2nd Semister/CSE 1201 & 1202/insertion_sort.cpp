#include<bits/stdc++.h>
using namespace std;
            
int main(){
    int arr[]={3,9,19,14,1,15,29,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while(j>=0 && current<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    // display array
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<"  ";
    } 
    return 0;
}