#include<bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int> arr,int n){
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            count++;
        }
        
    }

    return count;
    
}
int insertionSort(vector<int> arr,int n){
    int count=0;
    int i,k,j;
    for (int i = 1; i < n; i++)
    {
        k=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>k){
            arr[j+1]=arr[j];
            j--;
            count++;       
        }
        arr[j+1]=k;

    }

    return count;
}
int main()
{
    vector<int> v={170, 37, 56, 87, 29, 90, 198, 142, 109, 163, 92, 119, 8, 33, 48, 155, 85, 65, 141, 138, 183, 160, 60, 111, 191, 37, 20, 65, 73, 184, 176, 197, 76, 22, 30, 152, 64, 27, 93, 150, 135, 43, 178, 15, 88, 191, 143, 63, 152, 95, 179, 3, 110, 29, 3, 16, 134, 142, 27, 103, 80, 198, 152, 85, 97, 66, 147, 174, 76, 194, 119, 99, 174, 15, 191, 97, 112, 118, 34, 146, 19, 66, 43, 184, 64, 166, 183, 46, 97, 135, 17, 83, 90, 94, 134, 102, 177, 11, 113, 60};
    int n=v.size();
    int b=bubbleSort(v,n);
    int i=insertionSort(v,n);
    cout<<"Size of the list: "<<n<<endl;
    cout<<"Nnumber of comparisons used by the bubble sort: "<<b<<endl;
    cout<<"Nnumber of comparisons used by the insertion sort: "<<i<<endl;



    return 0;
}