#include<bits/stdc++.h>
using namespace std;
           
int main(){
    int arr[]={7,8,3,1,2,10};
    int n=6;
    //selection sort
    for (int i = 0; i < n; i++)
    {
        int small=i;
        for (int j = i+1; j<n; j++)
        {
            if(arr[small]>arr[j]){
                small=j;
            }
        }
        int temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
    }
    // display array
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}