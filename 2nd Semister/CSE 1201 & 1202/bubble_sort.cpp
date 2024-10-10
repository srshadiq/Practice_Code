#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {10, 3, 41, 12, 77, 21};
    int n = 6;
    int t;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

            
    cout<<"Displaying element: "<<endl;
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}