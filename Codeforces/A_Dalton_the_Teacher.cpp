#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int p[n];
        vector <int> x;
        for (int i = 0; i < n; i++)
        {
            cin >>p[i];
            if(p[i]==i+1)
            {
                x.push_back(i);
            }
        }
        int k=x.size();
        if(k==0)
        {
            cout <<0<<endl;
        }
        else if(k%2==0)
        {
            cout <<k/2<<endl;
        }
        else{
            cout <<(k/2)+1<<endl;
        }

    }


    return 0;
}