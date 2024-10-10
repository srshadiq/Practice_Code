#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int l,int r,int x){
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    
    }
}
int main()
{
    vector<int> v={1, 2, 3, 5, 8, 13, 21, 34, 55, 60, 74, 78};
    int x;
    cout<<"Enter number to search: ";
    cin>>x;
    sort(v.begin(),v.end());
    int n=v.size();
    int k=binarySearch(v,0,n-1,x);
    cout<<"Element found at index: "<<k<<endl;

    return 0;
}