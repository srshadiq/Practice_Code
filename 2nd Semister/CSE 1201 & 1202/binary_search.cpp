#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int x, int low, int high){
    while(low<=high){
        int mid=(low+high) /2;
        if(arr[mid]==x) return mid;
        else if(x<arr[mid]){
            high=mid-1;
        }
        else low=mid+1;
    }
    return -1;
}

int main(){
    int a[]={5,7,9,11,17,32,56,63};
    int element;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Enter the element to found:";
    cin>>element;
    int index=binarysearch(a,element,0,n-1);
    if(index==-1) cout<<"Element not found"<<endl;
    else cout<<"Element "<<a[index]<<" found at index :"<<index<<endl;  
    return 0;
}