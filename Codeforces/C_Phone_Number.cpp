#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define nl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define int long long
using namespace std;
const int N=2e5+7,M=1e9+7;
const double pi=acos(-1.0);
int dp[10][55];
string s;
int func(int num,int pos)
{
    if (pos==s.size()-1) return 1;
    if (dp[num][pos]!=-1) return dp[num][pos];
    int x=ceil((num+s[pos+1]-'0')/2.0);
    int y=floor((num+s[pos+1]-'0')/2.0);
    dp[num][pos]=0;
    if (x!=y) dp[num][pos]=func(x,pos+1)+func(y,pos+1);
    else dp[num][pos]=func(x,pos+1);
    return dp[num][pos];
}
bool check()
{
    int pre=s[0]-'0';
    for (int i=1;i<s.size();i++)
    {
        if ((pre+s[i]-'0')/2==s[i]-'0' || (pre+s[i]-'0'+1)/2==s[i]-'0')
        {
            pre=s[i]-'0';
        }
        else return 0;
    }
    return 1;
}
signed main()
{
    fastread();
    int t=1,tc=1;
    //cin>>t;
    while (t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>s;
        int ans=0;
        for (int i=0;i<10;i++)
        {
            ans+=func(i,0);
        }
        ans-=check();
        cout<<ans<<nl;
    }
}

			  		  	 		 		  	   	  	  		