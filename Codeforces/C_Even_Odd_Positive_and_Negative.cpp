#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    int even=0,odd=0,positive=0,negative=0;
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
        if(a[i]%2==0){
            even++;
        }
        if(a[i]%2!=0){
            odd++;
        }
        if(a[i]>0){
            positive++;
        }
        if(a[i]<0){
            negative++;
        }
    }
    cout <<"Even: "<<even<<endl;
    cout <<"Odd: "<<odd<<endl;
    cout <<"Positive: "<<positive<<endl;
    cout <<"Negative: "<<negative<<endl;
    

    return 0;
}