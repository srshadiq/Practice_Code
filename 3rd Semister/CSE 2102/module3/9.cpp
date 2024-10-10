#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int x){
    int low=0,count=0;
    int high=arr.size()-1;
    while(low<=high){
        count++;
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return count;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

}
int linearSearch(vector<int> arr,int x){
    int count=0;
    for (int i = 0; i < arr.size(); i++)
    {
        count++;
        if(x==arr[i]){
            return count;
        }
    }
    
}
int main()
{
    // vector<int> v={1, 2, 3, 5, 8, 13, 21, 34, 55, 60, 74, 78, 80, 84, 91, 94, 97, 100, 105};
    vector<int> v={1, 2, 3, 5, 8,};
    
    int x;
    cout<<"Enter number to search: ";
    cin>>x;
    int b=binarySearch(v,x);
    int l=linearSearch(v,x);
    cout<<"Number of comparisons using a binary search: "<<b<<endl;;
    cout<<"Number of comparisons using a linear search: "<<l<<endl;

    return 0;
}