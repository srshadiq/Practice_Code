#include<bits/stdc++.h>
using namespace std;

const int m=1e9+7;
int fact[1000007];
int exp(int a,int b)
{
	int result=1;
	while(b>0)
	{
		if(b&1)
		{
			result=(result*1LL*a)%m;
		}
		a=(a*1LL*a)%m;
		b>>=1;
	}
	return result;
}
int main()
{
	fact[0]=1;
	for (int i = 1; i < 1000007; i++)
	{
		fact[i]=(fact[i-1]*1LL*i)%m;
	}
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int ans=fact[a];
		int inv=(fact[a-b]*1LL*fact[b])%m;
		ans=(ans*1LL*exp(inv,m-2))%m;
		cout<<ans<<endl;
	}
	return 0;
}