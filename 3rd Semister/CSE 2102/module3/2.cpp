#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,largest=-1000000;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int first,last,flag=1;
    for (int i = 0; i < n; i++)
    {
        if(flag){
            if(arr[i]==largest){
                first=i;
                flag=0;
            }
        }
        if(arr[i]==largest){
            last=i;
        }
    }
    cout<<"Largest value: "<<largest<<endl;
    cout<<"First Occurance: "<<first+1<<endl;
    cout<<"Last Occurance: "<<last+1<<endl;

    return 0;
}