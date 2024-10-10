#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int freq[3]={};
        for (int i = 0; i < 3; i++)
        {
            freq[a[i]-'A']++;
            freq[b[i]-'A']++;
            freq[c[i]-'A']++;

        }
        if(freq[0]<3)
        cout<<'A'<<endl;
        else if(freq[1]<3)
        cout<<'B'<<endl;
        else if(freq[2]<3)
        cout<<'C'<<endl;

    }
    return 0;
}