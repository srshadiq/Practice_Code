#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> st;
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            sum+=st.size();
        }     
        cout<<sum<<endl;
    }
    return 0;
}