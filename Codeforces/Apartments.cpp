#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    vector<int> v1(a),v2(b);
    for (int i = 0; i < a; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int i=0,j=0;
    while(i<a&&j<b)
    {
        if(abs(v1[i])-v2[j]<=c)
        {
            i++;
            j++;
            ans++;
        }
        else
        {
            if(v1[i]<v2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}