#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> set, int n, int sum)
{
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);
 
    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
int main()
{
    int t;
    cin>>t;
    int sum=0;
    vector<int> v;
    while(t--)
    {

        int t,x;
        cin>>t>>x;

        if(t==1)
        {
            int f=pow(2,x);
            sum+=f;
            v.push_back(f);
        }
        if(t==2)
        {
            if(isSubsetSum(v,v.size(),x))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
    return 0;
}