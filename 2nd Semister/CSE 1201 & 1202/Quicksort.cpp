#include<bits/stdc++.h>
using namespace std;

int partition(int ar[],int l,int h)
{
    int pivot=ar[h];
    int i=l-1;
    for (int j = l; j < h; j++)
    {
        if(ar[j]<=pivot)
        {
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[h]);
    return i+1;
    
}
void quicksort(int ar[],int l,int h)
{
    if(l<h)
    {
        int pi=partition(ar,l,h);
        quicksort(ar,l,pi-1);
        quicksort(ar,pi+1,h);
    }
}
int main()
{
    int ar[]={64,25,12,22,11};
    cout<<"Original Array :";
    for (int i = 0; i < 5; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    quicksort(ar,0,4);
    cout<<"Sorted Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}