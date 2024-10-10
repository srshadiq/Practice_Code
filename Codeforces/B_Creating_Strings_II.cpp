#include<bits/stdc++.h>
using namespace std;

int exp(int a,int b,int m)
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
    string s;
    cin>>s;
    int M=1e9+7;
    int n=s.size();
    int freq[27]={};
    for (int i = 0; i < n; i++)
    {
        freq[s[i]-'a']++;
    }
    int fact[n+1];
    fact[0]=1;
    for (int i = 1; i <= n; i++)
    {
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
    int ans=fact[n];
    int inv=1;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>1)
        {
            inv=(inv*1LL*fact[freq[i]])%M;
        }
    }
    ans=(ans*1LL*exp(inv,M-2,M))%M;
    
    cout<<ans<<endl;
    
    
    
    return 0;
}