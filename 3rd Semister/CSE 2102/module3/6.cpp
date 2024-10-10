#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={2,1,55,63,45,88,5,11,22,8,4,36};
    int n=arr.size();
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(auto x: arr) cout<< x<<" ";
    

    return 0;
}