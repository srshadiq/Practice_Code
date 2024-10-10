#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,1,55,63,45,88,5,11,22,8,4,88};
    int x;
    cout<<"Enter number to search: ";
    cin>>x;
    int idx=-1;
    for (int i = 0; i < v.size(); i++)
    {
        if(x==v[i]){
            idx=i;
        }
    }
    if(idx!=-1){
        cout<<"Element found at index: "<<idx<<endl;    
    }
    else
        cout<<"Element not found"<<endl;    


    return 0;
}