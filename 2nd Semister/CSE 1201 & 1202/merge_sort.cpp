#include<bits/stdc++.h>
using namespace std;   
//merge sort
void merge(int arr[],int low,int mid,int high){
    int i,j,k,b[100];
    i=low;j=mid+1;k=low;

    while((i<=mid) && (j<=high)){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;k++;
        }
        else{
            b[k]=arr[j];
            j++;k++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        k++;i++;
    }
    while(j<=high){
        b[k]=arr[j];
        k++;j++;
    }
    for (int i = low; i <=high; i++)
    {
        arr[i]=b[i];
    }
}   
void mergesort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    else return;
}    
int main(){
    int arr[]={7,8,3,1,2,10};
    int n=6;
    // merge sort
    mergesort(arr,0,n-1);
    // display array
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<"  ";
    }       
    return 0;
}