#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={10, 5, 8, 20, 15,50,24,30,90,35};
    int largest=v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]>largest){
            largest=v[i];
        }
    }
    
    cout<<"Largest integer: "<<largest<<endl;
    return 0;
}