#include<bits/stdc++.h>
using namespace std; 

int partition(int a[],int low,int high){
    int index=a[low];
    int i=low+1;
    int j=high;
    do{
        while(a[i]<=index){
            i++;
        }
        while(a[j]>index){
            j--;
        }
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    //changing index
    int temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
     
void quicksort(int a[],int low,int high){
    int partitionindex;
    
    if(low<high){
        partitionindex=partition(a,low,high);
        quicksort(a,low,partitionindex-1);
        quicksort(a,partitionindex+1,high);
    }
    else return;
}

int main(){
    int arr[]={7,8,3,1,2,10};
    int n=6;
    //quick sort
    quicksort(arr,0,n-1);
    
    // display array
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}
