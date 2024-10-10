#include <bits/stdc++.h>
using namespace std;
int main()
{
	string t,s;
	cin >> t >> s;
	int x=t.size();
	bool ans=true;
	for (int i = 0; i < x; ++i)
	{
		if(t[i]!=s[x-1-i])
		{
			ans=false;
		}
	}
	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
}
