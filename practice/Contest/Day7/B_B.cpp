#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double ans;
    ans=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    // cout<<ans<<endl;
    printf("%.09llf",ans);


    return 0;
}