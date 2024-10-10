#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,1,55,63,45,88,5,11,22,8,4,36};
    int n=v.size();
    for (int i = 0; i <n-1 ; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
        
    }
    for(auto x: v) cout<< x<<",";
    

    return 0;
}