#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        int a[10000],b[10000],n;
        cin >>n;
        int x=-1,y=0;
        for (int i = 0; i < n; i++)
        {
            cin >>a[i] >>b[i];
            if((b[i]>x)&&(a[i]<=10))
            {
                x=b[i];
                y=i+1;
            }
        }
        cout << y <<endl;
    
    }
    return 0;
}