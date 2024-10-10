#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        char s[1000],ans[1000];
		int a=0;
		for (int i = 0; i < 64; i++)
		{
			cin >>s[i];
		}
		for (int i = 0; i < 64; i++)
		{
			if(s[i]=='.')
			{
				continue;
			}
			else{
				ans[a]=s[i];
				a++;
			}
		}
		for (int i = 0; i < a; i++)
		{
			cout<< ans[i];
		}
		
		
		
    }
}